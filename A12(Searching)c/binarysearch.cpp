#include<iostream>
using namespace std;
class binary
{
int a[100],i,m,mid,ub,lb,item;
public:
void accept()
{
cout<<"\nEnter no. Of Elements: ";
cin>>m;
cout<<"\nEnter the elements: ";

lb=0;
for(i=0;i<m;i++)
{
cin>>a[i];

}
cout<<"\nElements are Sorted";
for(int i=0;i<m;i++)
{
for(int j=0;j<m-1;j++)
{
if(a[j]>a[j+1])
{
float temp;
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
cout<<"\nAfter Sort:\n";
for(int i=0;i<m;i++)
{
cout<<a[i]<<endl;
}
ub=m-1;


cout<<"\nEnter the number to be searched: ";
cin>>item;


}
void search()
{
while(1)
{
mid=(ub+lb)/2;



if(item==a[mid])
{
cout<<"position of the item is:"<<mid+1<<"\n";
break;
}
else if(item>a[mid])
{
lb=mid+1;
}
else
{
ub=ub-1;
}
}
}
};
int main()
{
binary obj;
obj.accept();
obj.search();
return 0;
}
