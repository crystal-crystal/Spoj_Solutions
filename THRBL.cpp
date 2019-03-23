#include <bits/stdc++.h>
using namespace std;
int maxq(int st[],int ss,int se,int qs,int qe,int si)
{
	if(qe<ss||qs>se)
	return INT_MIN;
	if(qs<=ss&&qe>=se)
	return st[si];
	int m=(ss+se)/2;
	return max(maxq(st,ss,m,qs,qe,2*si+1),maxq(st,m+1,se,qs,qe,2*si+2));
}
int construct(int st[],int s,int e,int si,int a[])
{
 if(s==e)
 {
 	st[si]=a[s];
 	return  st[si];
 }
 int m=(s+e)/2;
 st[si]=max(construct(st,s,m,2*si+1,a),construct(st,m+1,e,2*si+2,a));
 return st[si];
}
int main() {
  int n,m,l,r;
  int h[50005];
  scanf("%d%d",&n,&m);
  for(int i=0;i<n;i++)
  scanf("%d",&h[i]);
  int st[4*50005];
  construct(st,0,n-1,0,h);
  int ctr=0;
  for(int i=0;i<n;i++)
  {
  	scanf("%d%d",&l,&r);
    if(maxq(st,0,n-1,l,r-2,0)<h[l-1])
  	ctr++;
  }
  cout<<ctr<<endl;
	return 0;
}
