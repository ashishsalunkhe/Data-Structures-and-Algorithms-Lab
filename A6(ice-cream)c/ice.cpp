#include<iostream>
using namespace std;
int bt=0;

struct node 
{
 int rn;
 node * next;
}*butter=NULL,*vanila=NULL;

void addB()
{	
 struct node *ptr =new node(); 
 struct node *cur =new node();
 cout<<"\nEnter Roll No : ";
 cin>>ptr->rn;
 ptr->next=NULL;
 cur=butter;
 if(butter ==NULL)
  butter=ptr;
 else
 {
  while(cur->next!=NULL)
  {
   cur=cur->next;
  }
  cur->next=ptr;	
 }
}

void addV()
{	
 struct node *ptr =new node();
 struct node *cur= new node(); 
 cout<<"\nEnter Roll No : ";
 cin>>ptr->rn;
 ptr->next=NULL;
 cur=vanila;
 if(vanila ==NULL)
  vanila=ptr;
 else
 {
  while(cur->next!=NULL)
  {
   cur=cur->next;
  }
  cur->next=ptr;	
 }
}

void displayB()
{
 struct node *ptr =new node();
 ptr=butter;
 while(ptr!=NULL)
 {
  cout<<ptr->rn<<endl;
  ptr=ptr->next;
 }
}

void displayV()
{
 struct node *ptr =new node();
 ptr=vanila;
 while(ptr!=NULL)
 {
  cout<<ptr->rn<<endl;
  ptr=ptr->next;
 }
}

void onlyV()
{
 struct node *ptr1 =new node();
 struct node *ptr2 =new node();
 ptr1=vanila; 
 ptr2=butter;
 while(ptr1!=NULL)
 {
 ptr2=butter;
 while(ptr2!=NULL)
 {
 if(ptr1->rn==ptr2->rn)
 break;
 ptr2=ptr2->next;
 }
 if(ptr2==NULL)
 cout<<ptr1->rn<<endl;
 ptr1=ptr1->next;	
 }
}

void onlyB()
{
 struct node *ptr1 =new node();
 struct node *ptr2 =new node();
 ptr1=butter; 
 ptr2=vanila;
 while(ptr1!=NULL)
 {
  ptr2=vanila;
  while(ptr2!=NULL)
  {
   if(ptr1->rn==ptr2->rn)
   break;
   ptr2=ptr2->next;
  }
  if(ptr2==NULL)
   cout<<ptr1->rn<<endl;
  ptr1=ptr1->next;	
 }
}

void intersec()
{
 struct node *ptr1 =new node();
 struct node *ptr2 =new node();
 ptr1=butter; 
 ptr2=vanila;
 while(ptr1!=NULL)
 {
  ptr2=vanila;
  while(ptr2!=NULL)
  {
   if(ptr1->rn==ptr2->rn)
   {
    cout<<ptr1->rn<<endl;
       break;
   }
   ptr2=ptr2->next;
  }
  ptr1=ptr1->next;
 }
}

void bt_count()
{
 struct node *ptr1 =new node();
 struct node *ptr2 =new node();
 ptr1=butter; 
 ptr2=vanila;
 while(ptr1!=NULL)
 {
  ptr2=vanila;
  while(ptr2!=NULL)
  {
   if(ptr1->rn==ptr2->rn)
   {
     bt++;
    break;
   }
   ptr2=ptr2->next;
  }
  ptr1=ptr1->next;
 }
}

void uni()
{
 cout<<"\nSet of Students who either like Vanila or Butterscotch or Both\n";
 onlyV();
 intersec();
 onlyB();
 
}

int main()
{
 char ch;
 int temp,total,V=0,B=0;
 
 cout<<"\nEnter total no. of Students : ";
 cin>>total;
 
 cout<<"\nEnter Set of Students who like Vanilla\n";
 do
 {
  addV();
  V++;
  cout<<"\nAdd More (Y/N) : ";
  cin>>ch;
 }while(ch=='y'||ch=='Y');
 
 cout<<"\nEnter Set of Students who like Butterscotch\n";
 do
 {
  addB();
  B++;
  cout<<"\nAdd More (Y/N) : ";
  cin>>ch;
 }while(ch=='Y'||ch=='y');
 
 cout<<"\nSet of Students who like Vanilla\n";
 displayV();
 
 cout<<"\nSet of Students who like Butterscotch\n";
 displayB();
 
 uni();
 
 cout<<"\nSet of Students who like both\n";
 intersec();
 
 cout<<"\nSet of Students who like only Vanilla\n";
 onlyV();
 bt_count();
 
 cout<<"\nSet of Student who like only Butterscotch\n";	
 onlyB();

 cout<<"\nNumber of Students who neither like Vanilla nor Butterscotch : "<<total-V-B+bt<<endl;
 
 return 0;
	
}
