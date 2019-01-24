#include<bits/stdc++.h>
using namespace std;
int hall[105][105];
int n,m;
int x[]={-1,-1,0,1,1,1,0,-1};
int y[]={0,1,1,1,0,-1,-1,-1};
bool valid(int i,int j)
{
   return (i>=0&&i<n&&j>=0&&j<m); 
}
bool same(int num,int row,int col)
{
    int i,j;
    for(int k=0;k<8;k++)
    {
        i=row+x[k];
        j=col+y[k];
        if(isvalid(i,j)&&num==hall[i][j])
         return true;
    }
    return false;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {

        scanf("%d%d",&n,&m);
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            scanf("%d",&hall[i][j]);
            int ctr=0;
        bool visited[102]={false};
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            if(!visited[hall[i][j]]&&hall[i][j]!=-1&&same(hall[i][j],i,j))
             {

                 ctr++;
                 visited[hall[i][j]]=true;
             }
            cout<<ctr<<endl;
    }

    return 0;
}
