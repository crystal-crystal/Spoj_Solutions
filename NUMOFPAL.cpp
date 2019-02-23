
#include <bits/stdc++.h>
using namespace std;

int main() {

string str;
int ans=0;
cin>>str;
int n=str.size();
bool dp[n+1][n+1];

for(int i=0;i<n;i++)
    dp[i][i]=true;
    ans+=n;
for(int len=2;len<=n;len++)
{

    for(int i=0;i<n-1;i++)
    {
        int j=i+len-1;
        if(str[i]==str[j]&&len==2)
           {dp[i][j]=true;
           ans++;
           }
      else if(str[i]==str[j]&&dp[i+1][j-1])
        {dp[i][j]=true;
         ans++;
        }
      else
        dp[i][j]=false;

    }
}
cout<<ans<<endl;
	return 0;
}
