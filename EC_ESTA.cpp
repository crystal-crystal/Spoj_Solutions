#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n;
    scanf("%d",&t);
    while(t--){
    scanf("%d",&n);
    priority_queue<long> p1;  
    long x;
    priority_queue<long,vector<long>,greater<long>> p2;

    scanf("%ld",&x);
    p1.push(x);
    printf("%ld\n",x);
    double median=x;
    for(int i=0;i<n-1;i++)
    {

        scanf("%ld",&x);
        if(p1.size()<p2.size())
        {
           if(x<median)
            p1.push(x);
           else
           {

               p1.push(p2.top());
               p2.pop();
               p2.push(x);

           }
           median=(p1.top()+p2.top())/2.0;
        }
            else if(p1.size()==p2.size())
            {
              if(x<median)
                {p1.push(x);
                median=(double)p1.top();
                }
              else
                {p2.push(x);
                median=(double)p2.top();
            }
            }
            else
            {
                if(x<median)
                {
                    p2.push(p1.top());
                    p1.pop();
                    p1.push(x);
                }
                else
                {
                    p2.push(x);

                }
                median=(p1.top()+p2.top())/2.0;
            }

       if(median-(long)median==0)
            printf("%ld\n",(long)median);
       else
       {
        printf("%ld",(long)median);
        printf(".5\n");
       }
    }
    }


    return 0;
}
