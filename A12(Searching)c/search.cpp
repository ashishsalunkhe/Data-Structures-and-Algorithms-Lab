#include<iostream>
using namespace std;

int main()
{
 int a[20],i,n,element;
 int flag=0;
 cout<<"\nENTER THE NO. OF ELEMENTS: ";
 cin>>n;
 cout<<"\nENTER THE ELEMENTS:\n";
 for(i=0;i<n;i++)
 cin>>a[i];
 //for sequential search
 cout<<"\nENTER THE ELEMENT TO BE SEARCHED\n";
 cin>>element;
 for(i=0;i<n;i++)
 {
  if(a[i]==element)
  {
   flag=1;
   break;
  }
 }
 if(flag==1)
     cout<<"\nELEMENT FOUND AT POSITION  "<<(i+1)<<endl;
 else
     cout<<"\nELEMENT NOT FOUND\n";
 return 0;
}
