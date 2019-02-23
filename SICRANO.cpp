
#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define f first
#define s second
#define mp make_pair
#define pb push_back
int main() {

int t,n,m,x,y,x1,y1;
scanf("%d",&t);
while(t--)
{

    scanf("%d%d",&n,&m);
    vector<pii> v;
    for(int i=0;i<n;i++)
    {

        scanf("%d%d",&x,&y);
        v.pb(mp(x,y));
    }
    for(int i=0;i<m;i++)
    {

        scanf("%d%d%d%d",&x,&y,&x1,&y1);

        int ctr=0;

        for(int i=0;i<v.size();i++)
        {

           int p=v[i].f;
           int q=v[i].s;
           double d1=sqrt((x-p)*(x-p)+(y-q)*(y-q));
           double d2=sqrt((x1-p)*(x1-p)+(y1-q)*(y1-q));
           double d3=sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y));
           double diff=fabs(d3-(d1+d2));
           if(diff<=0.000001)
                ctr++;
        }


        cout<<ctr<<endl;
    }
}
	return 0;
}
