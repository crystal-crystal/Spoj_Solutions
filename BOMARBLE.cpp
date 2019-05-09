#include <bits/stdc++.h>
using namespace std;
 
int main() {
	
	// your code here
	int n;
	while(cin>>n)
	{
		if(n==0)
		break;
		long long ans=5+(((n-1)*(3*n+8))/2);
		
		cout<<ans<<endl;
	}
 
	return 0;
}
