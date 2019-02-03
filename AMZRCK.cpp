#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,n;
    scanf("%lld",&t);
    while(t--)
    {

        scanf("%lld",&n);
        ll a[n+1];
        ll b[n+1];
        a[1]=1;
        b[1]=1;
        for(ll i=2;i<=n;i++)
        {

            a[i]=a[i-1]+b[i-1];
            b[i]=a[i-1];
        }
        ll ans=a[n]+b[n];
        printf("%lld\n",ans);
    }
    return 0;
}
