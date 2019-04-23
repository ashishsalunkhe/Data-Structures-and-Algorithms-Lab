#include<iostream>
using namespace std;
int fib(int x)
{
   int i,j;
   if(x<=1)
       return x;
    else
    {
       i=fib(x-1);
       j=fib(x-2);
       return(i+j);
    }
}
int main()
{
   int i,j,mid,f1,f2,x,item[20],t,n;
   cout<<"enter the total no. of elements : ";
   cin>>n;
   cout<<"Enter element in sorted manner : ";
   for(i=0;i<n;i++)
   {
      cin>>item[i];
   }
   cout<<"Enter the element to search : ";
   cin>>x;
   for(j=1;fib(j)<n;j++);
   mid=n-fib(j-2)+1;
   f1=fib(j-2);
   f2=fib(j-3);
   while(x!=item[mid])
     if(mid<0 || x>item[mid])
     {
        if(f1==1)
        {
           cout<<"element not found";
           break;
        }
        mid=mid+f2;
        f1=f1-f2;
        f2=f2-f1;
     }
     else
     {
        if(f2==0)
        {
           cout<<"element not found";
           break;
        }
        mid=mid-f2;
        t=f1-f2;
        f1=f2;
        f2=t;
     }
     if(x==item[mid])
         cout<<"element\t"<<x<<" is found at position\t"<<mid;
}
