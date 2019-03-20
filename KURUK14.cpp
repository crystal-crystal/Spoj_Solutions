#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x;

    scanf("%d",&t);
    while(t--)
    {

        scanf("%d",&n);
        int cnt[1005]={0};
        for(int i=0;i<n;i++)
            {scanf("%d",&x);
            cnt[x]++;
            }
            bool flag=true;
            if(cnt[n-1]==0)
            flag=false;
            else{

                cnt[n-1]--;
               for(int i=1;i<n;i++)
               {
                 if(cnt[i]>0)
                  cnt[i]--;
                 else if(cnt[n-i-1]>0)
                    cnt[n-i-1]--;
                 else
                 {
                     flag=false;
                     break;
                 }

               }
            }



        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
