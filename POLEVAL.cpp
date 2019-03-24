#include <bits/stdc++.h>
using namespace std;
long long horner(int c[], int n, int x) 
{ 
    long long res= c[0];   
  
    
    for (int i=1; i<n; i++) 
        res = res*x + c[i]; 
  
    return res; 
} 
int main() {
	
	// your code here
	int n,k;
	int x[500];
	int c[1005];
	int p=1;
	while(1)
	{
 scanf("%d",&n);
	if(n==-1)
	break;
	for(int i=0;i<n+1;i++)
     scanf("%d",&c[i]);
	scanf("%d",&k);
	for(int i=0;i<k;i++)
	scanf("%d",&x[i]);
	printf("Case %d:\n",p++);
	for(int i=0;i<k;i++)
	{long long res=horner(c,n+1,x[i]);
	 
	 printf("%lld\n",res);
	}
	}

	return 0;
}
