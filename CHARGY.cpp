#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,x;
	scanf("%d",&n);

	queue<int> q;
	stack<int> s;
	for(int i=0;i<n;i++)
	{scanf("%d",&x);
	q.push(x);
	}
	
	while(!q.empty())
	{
		int y=q.front();
		q.pop();
		if(s.empty())
		s.push(y);
		else
		{
			if(s.top()==-1&&y==1||s.top()==1&&y==-1)
			{
				s.pop();
			}
			else
			s.push(y);
		}
	}
	cout<<s.size();
	return 0;
}
