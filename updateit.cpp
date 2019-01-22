#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,u,q,l,r,val,x;
    scanf("%d",&t);
    while(t--)
    {

        int a[10005];
        scanf("%d%d",&n,&u);
        int d[10005]={0};

        for(int i=0;i<u;i++)
        {

            scanf("%d%d%d",&l,&r,&val);
            d[l]+=val;
            d[r+1]-=val;
        }
        scanf("%d",&q);
       a[0]=d[0];
        for(int i=1;i<n;i++)
        {
           a[i]=a[i-1]+d[i];
            }
       for(int i=0;i<q;i++)
       {

           scanf("%d",&x);
           printf("%d\n",a[x]);
       }
    }

    return 0;
}
