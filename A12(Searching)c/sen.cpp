#include<iostream>
using namespace std;
int main()
{
int n,i,num,a[100];
cout<<"\nEnter no. Of Elements: ";
cin>>n;
cout<<"\nEnter elements:"<<endl;
for(i=0;i<n;i++)
	{
	cin>>a[i];
	}
cout<<"\nEnter no. to be searched: ";
cin>>num;
a[n]=num;
i=0;
while(num!=a[i])
{
i++;
}
if(i<n)
	cout<<"\nelement "<<num<<" found\n";
else
	cout<<"\nelement "<<num<<" not found\n";
return 0;
}
