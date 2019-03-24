#include <bits/stdc++.h>
using namespace std;
void computeLPSArray(string pat, int M, int* lps) 
{ 
    
    int len = 0; 
  
    lps[0] = 0; 
  
    
    int i = 1; 
    while (i < M) { 
        if (pat[i] == pat[len]) { 
            len++; 
            lps[i] = len; 
            i++; 
        } 
        else  
        { 
            
            if (len != 0) { 
                len = lps[len - 1]; 
  
                 
            } 
            else 
            { 
                lps[i] = 0; 
                i++; 
            } 
        } 
    } 
} 
bool  kmp(string pat, string txt) 
{ 
 int M=pat.size();
 int N=txt.size();
  
     
    int lps[M]; 
  
    
    computeLPSArray(pat, M, lps); 
  
    int i = 0; 
    int j = 0;  
    while (i < N) { 
        if (pat[j] == txt[i]) { 
            j++; 
            i++; 
        } 
  
        if (j == M) { 
           return true;
        } 
  
        
        else if (i < N && pat[j] != txt[i]) { 
             
            if (j != 0) 
                j = lps[j - 1]; 
            else
                i = i + 1; 
        } 
    } 
    return false;
} 
  


int main() {
	
	// your code here
	int t,n;
	int h[100006];
	scanf("%d",&t);
	string str;
	while(t--)
	{
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		scanf("%d",&h[i]);
		cin>>str;
		string temp;
		for(int i=0;i<n-1;i++)
		{
			if(h[i]<h[i+1])
			temp.push_back('G');
			else if(h[i]>h[i+1])
			temp.push_back('L');
			else
			temp.push_back('E');
		}
		if(kmp(str,temp))
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}

	return 0;
}
