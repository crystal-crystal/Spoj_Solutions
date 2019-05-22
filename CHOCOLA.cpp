#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define mp make_pair
#define pb push_back
#define f first
#define s second
int main() {
	// your code goes here
	int t,m,n,x;
	scanf("%d",&t);
	vector<int> h,v;
	while(t--)
	{
		scanf("%d%d",&m,&n);
		for(int i=0;i<m-1;i++)
		{
			scanf("%d",&x);
			v.pb(x);
		}
		for(int i=0;i<n-1;i++)
		{
			scanf("%d",&x);
			h.pb(x);
		}
		sort(v.begin(),v.end(),greater<int>());
		sort(h.begin(),h.end(),greater<int>());
		int ans=0;
		int i=0,j=0;
	    int h_cut=1,v_cut=1;
		while(i<m-1&&j<n-1)
		{
			if(v[i]>=h[j])
			{
				ans+=(v[i])*h_cut;
				i++;
				v_cut++;
			}
			else
			{
			  ans+=(h[j])*v_cut;
			  j++;
			  h_cut++;
			}
 
		}
		while(i<m-1)
		{
			ans+=(v[i])*h_cut;
			i++;
			v_cut++;
		}
		while(j<n-1)
		{
			ans+=(h[j])*v_cut;
			j++;
			h_cut++;
		}
		cout<<ans<<endl;
		v.clear();
		h.clear();
	}
	return 0;
}
