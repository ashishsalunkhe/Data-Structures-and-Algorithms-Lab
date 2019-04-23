#include<iostream>
using namespace std;

void saddle(int a[10][10],int n)
{
	int min,pos,i,j,f,ch=0;
	for(i=0;i<n;i++)
	{
		min =a[i][0];
		pos=0;
		f=0;
		for(j=1;j<n;j++)
		{
			if(min>a[i][j])
			{
				min=a[i][j];
				pos=j;
			}	
		}

		
		for(j=0;j<n;j++)
		{

			if(min<a[j][pos])
			{
				f=1;
				break;
			}	
		}
		
		if(f!=1)
		{
			cout<<"saddle point :: "<<a[i][pos];
			ch=1;
		}
	}
	if(ch==0)
		cout<<"NO saddle point found";
} 

int main()
{
	int a[10][10],n;
	cout<<"Enter order of matrix::";
	cin>>n;

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	}

	saddle(a,n);
	return 0;
}
