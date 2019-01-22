#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int n=str.size();
    int dp[n+1];
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<=n;i++)
    {

    dp[i]=dp[i-1];
    int x=(str[i-2]-'0')*10+str[i-1]-'0';
    if(str[i-2]!='0'&&x<=20)
        dp[i]+=dp[i-2];
    }
    cout<<dp[n]<<endl;
    return 0;
}
