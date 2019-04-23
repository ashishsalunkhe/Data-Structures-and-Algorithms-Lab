#include<iostream>
#include<string.h>
using namespace std;

struct node
{
	char data;
	struct node *next;
}*top=NULL;

void push(char ch1)
{
	struct node *ptr=new node;
	ptr->data=ch1;
	ptr->next=NULL;
	
	if(top==NULL)
          top=ptr;
	else 
	{
	ptr->next=top;
	top=ptr;
	}
	
}
char pop()
{	char t;
	struct node *free=new node;
	if(top==NULL)
           return 'a';
	free=top;
	t=free->data;
	top=top->next;
	delete free;
	return t;
}
int main()
{
	char str[30],ch;
	cout<<"Enter the string to be checked:";
	cin>>str;
	int l=strlen(str);
	               
	for(int i=0;i<l;i++)
	{
		switch(str[i])
		{
			case '{':push(str[i]);
                                 break;
			case '[':push(str[i]);
                                 break; 
			case '(':push(str[i]);
			         break;
			 
			case '}':
				ch=pop();
				if(ch!='{')
				{	cout<<"\nInvalid expresion...TRY AGAIN!!!\n";
					return 0;
				}
				break;
			
			 case ']':
			 	ch=pop();
				if(ch!='[')
				{	cout<<"\nInvalid expresion...TRY AGAIN!!!\n";
					return 0;
				}
				break; 
			case ')':
				ch=pop();
				if(ch!='(')
				{	cout<<"\nInvalid expresion...TRY AGAIN!!!\n";
					return 0;
				}
				break;
				
				
		}
	}
	
	if(top==NULL)
                cout<<"\nValid expression, Well paranthesized expression";
		
	else 
	cout<<"\nInvalid expresion...TRY AGAIN!!!\n";

return 0;
	
}
