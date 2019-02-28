#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    while(cin>>n)
    { if(n==0)
    break;
    if(n==1)
    {
        printf("1/1\n");
        continue;
    }
      stack<int> s;
      s.push(n);
      int a=1,b=1,x,p;
      while(1)
      {

          x=n/2;
          if(x==1)
           break;
          s.push(x);
          n=x;
      }
      while(!s.empty())
      {

        int y=s.top();
        s.pop();
        if(2*x==y)
        {
         p=a/(a+b);
         b=a+b;

        }
        else if((2*x+1)==y)
        {
         p=(a+b)/b;
         a=a+b;
         }
         x=y;
      }
      int ans=__gcd(a,b);
      a/=ans;
      b/=ans;
      printf("%d/%d\n",a,b);
    }
    return 0;
}
