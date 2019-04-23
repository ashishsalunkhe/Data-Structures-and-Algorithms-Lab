
#include<string.h>
#include<iostream>

using namespace std;


void pal(char p[20],int len)
{
	
	char stack[20];
	int top,i,j,flag;	
	top=-1;
	
	for(i=0;i<len;i++)
	{
				
		if(isalpha(p[i]))
		{
			if(isupper(p[i]))			
			{
				top++;	
				char y=tolower(p[i]);				
				stack[top]=y;
			}
			
			else
			{
				top++;				
				stack[top]=p[i];
			}
		}
	}


	for(i=0,j=top;i<=top&&j>=0;j--,i++)
	{
		
		if(stack[i]!=stack[j])			
			flag=1;
		else		
			break;
		
	}

	if(flag==0)
		cout<<"\nThe Entered String is palindrom \n";
        else
		cout<<"\nThe entered string is not palindrom \n";
	
	
}

int main()
{

	
	int len;
	char p[20];
	cout<<"\n   Enter any String :  ";
	cin.getline(p,20);
	len=strlen(p);	
	
	pal(p,len);
}



	
