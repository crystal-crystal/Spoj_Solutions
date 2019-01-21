#include<iostream>
#include<algorithm>
using namespace std;

struct ele
{
int index,value;
};

ele arr[100007];

//comparator to perform unstable sort
bool comp(ele a,ele b)
{
    if(a.value<b.value)
        return true;
    else if(a.value==b.value)   //to ensure identical elements order is changed after sorting
        return a.index>b.index;
    else
        return false;
}
int main()
{
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {   
       cin>>arr[i].value;
       arr[i].index=i+1;  //storing position of elements in the original array
   }
   sort(arr,arr+n,comp);  
   
   for(int i=0;i<n;i++)
    cout<<arr[i].index<<" ";

}
