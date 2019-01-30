#include <bits/stdc++.h>
using namespace std;
#define MAX 1000005
int t,n;
bool prime[MAX];
void seive()
{
	memset(prime,true,sizeof(prime));
	for(int i=2;i*i<MAX;i++)
	{
		if(prime[i])
		{
			for(int p=i*i;p<MAX;p+=i)
			prime[p]=false;
		}
	}

}
int main() {

	// your code here
	seive();
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int dp[n+1];
		dp[0]=1;
		dp[1]=1;
		dp[2]=1;
		dp[3]=1;
		for(int i=4;i<=n;i++)
		dp[i]=dp[i-1]+dp[i-4];
		int x=dp[n];
		int ctr=0;
		for(int i=2;i<=x;i++)
		if(prime[i])
		ctr++;
		printf("%d\n",ctr);
	}

	return 0;
}
