


#include <bits/stdc++.h>
using namespace std;
#define INF INT_MAX
#define pii pair<int,int>
#define f first
#define s second
#define mp make_pair
int main() {
	
	// your code here
	int t,n,m;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&m,&n);
	    char grid[101][101];
	    for(int i=0;i<m;i++)
	    {
	        scanf("%s",grid[i]);
	    }
	    int dis[102][102]={{INF}};
	    queue<pii> q;
	    pii res,goal;
	    for(int i=0;i<m;i++)
	    for(int j=0;j<n;j++)
	    {if(grid[i][j]=='$')
	      {
	      	res.f=i;
	      	res.s=j;
	      }
	     if(grid[i][j]=='#')
	     {
	     	goal.f=i;
	     	goal.s=j;
	     }
	    }
	    q.push(res);
	    dis[res.f][res.s]=0;
	    while(!q.empty())
	    {
	    	pii temp=q.front();
	    	q.pop();
	    	if(temp==goal)
	    	break;
	    	if(temp.f+1<m&&grid[temp.f+1][temp.s]=='O'||grid[temp.f+1][temp.s]=='#')
	    	{
	    		if(dis[temp.f+1][temp.s]>dis[temp.f][temp.s]+1)
	    		{dis[temp.f+1][temp.s]=dis[temp.f][temp.s]+1;
	    		q.push(mp(temp.f+1,temp.s));
	    	}
	    	}
	    	if(temp.s+1<n&&grid[temp.f][temp.s+1]=='O'||grid[temp.f][temp.s+1]=='#')
	    	{
	    		if(dis[temp.f][temp.s+1]>dis[temp.f][temp.s]+1)
	    		{dis[temp.f][temp.s+1]=dis[temp.f][temp.s]+1;
	 
	    		q.push(mp(temp.f,temp.s+1));
	    	}
	    	}
	    	if(temp.f-1>=0&&grid[temp.f-1][temp.s]=='O'||grid[temp.f-1][temp.s]=='#')
	    	{
	    		if(dis[temp.f-1][temp.s]>dis[temp.f][temp.s]+1)
	    		{dis[temp.f-1][temp.s]=dis[temp.f][temp.s]+1;
	    		q.push(mp(temp.f-1,temp.s));
	    	}
	    	}
	    	if(temp.s-1>=0&&grid[temp.f][temp.s-1]=='O'||grid[temp.f][temp.s-1]=='#')
	    	{
	    		if(dis[temp.f][temp.s-1]>dis[temp.f][temp.s]+1)
	    		{dis[temp.f][temp.s-1]=dis[temp.f][temp.s]+1;
	    		q.push(mp(temp.f,temp.s-1));
	    	}
	    	
	    	}
	    	
	    }
	    if(dis[goal.f][goal.s]==INF)
	    cout<<"-1\n";
	    else
	    cout<<dis[goal.f][goal.s]<<endl;
	}

	return 0;
}
