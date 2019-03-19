#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	string s;
	while(t--)
	{
		cin>>s;
		int n=s.size();
		long ans=0;
		int left[n]={0},right[n]={0};
		if(s[0]=='s')
		left[0]=1;
	
		if(s[n-1]=='s')
		right[n-1]=1;
	
		for(int i=1;i<n;i++)
		{
		if(s[i]=='s')
		left[i]=1+left[i-1];
		else
		left[i]=left[i-1];
		}
		for(int i=n-2;i>=0;i--)
		{
		if(s[i]=='s')
		right[i]=1+right[i+1];
		else
		right[i]=right[i+1];
		}
		for(int i=0;i<n;i++)
		{
			if(s[i]=='m')
			ans+=(left[i]*right[i]);
		}
		cout<<ans<<endl;
	}
	return 0;
}
