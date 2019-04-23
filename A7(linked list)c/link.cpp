#include <iostream>
using namespace std;
int count = 0;
struct node
{
 void add(int),disp(),insert(),del(int),neg(),sort(),rev(),delf(),search(int);
 int no;
 struct node *next=NULL,*start=NULL,*end=NULL,*prev=NULL;
}a,b;

void node::add(int n1)
{
 struct node *ptr;
 ptr=new node;
 struct node *temp;
 temp=start;
 ptr->no=n1;
 ptr->next=NULL;
  if(start==NULL)
   {
    start=ptr;
    end=start;
    count++;
   }
  else
   {
    while(temp->next!=NULL)
     {
      temp=temp->next;
     }
      temp->next=ptr;
      end=ptr;
      count++;
    }
    
}


void node::disp()
{
 struct node *ptr;
 ptr=new node;
 ptr=start;
  if(start==NULL)
   cout<<"\nList is Empty\n";
  else
   {
    while(ptr!=NULL)
     {
      cout<<"Number : "<<ptr->no<<"\t";
      cout<<"\n";
      ptr=ptr->next;
     }
    }
    cout<<"\n";
}

void node::insert()
{
 struct node *ptr;
 ptr=new node;
 struct node *temp;
 temp=start;
 
 cout<<"\n\nEnter the new number:  ";
 cin>>ptr->no;

 int pos=1;
 int position;
 cout<<"\nEnter Postion for the new number :";
 cin>>position;

 count++;
 if(position==1)
 {
  ptr->next=start;
  start=ptr;
 }
 
 else
 {
  while(pos!=position-1)
  {
   temp=temp->next;
   pos++;
  }
  
  ptr->next=temp->next;
  temp->next=ptr;
 }
 
}

void node::del(int no1)
{
 struct node * temp=new node;
 struct node * free=new node;
 temp=start;

 count--;
 if(no1==start->no)
  {
   free=start;
   start=start->next;
   delete(free);
  }
  
  else
  {
   while(temp->next->no!=no1)
    {
     temp=temp->next;
    }
     free=temp->next;
     temp->next=temp->next->next;
     delete(free);
   }
}

void node::neg()
{
 struct node * temp=new node;
 struct node * free=new node;
 
 for(temp=start ; temp != NULL; temp=temp->next)
 {
  if(temp->no < 0)
  {
   b.add(temp->no);
   a.del(temp->no);
  }
 
 }
}
 
 void node::sort()
 {
  struct node * temp=new node;
  struct node * temp1=new node;
  struct node * temp2=new node;
 
  for(temp=start,temp1=start->next ; temp1 != NULL; temp=temp->next,temp1=temp1->next)
  {
   
   if(temp->no > temp1->no)
   {
    temp2->no = temp1->no;
    temp1->no = temp->no;
    temp->no = temp2->no;
   }
  } 
  
 }
 
 void node::rev()
 {
  struct node * temp=new node;
  temp = start;
 while(temp!=NULL)
  {
   
   next = temp->next;
   temp->next = prev;
   prev = temp;
   temp =next;
  }
  start=prev;
 }

void node::delf() //to delete all nodes
{
 struct node *ptr=new node;
 struct node *temp =new node;
 struct node * free=new node;
 ptr=start;
  
    while(ptr!=NULL)
     {
      temp=ptr;
      ptr=ptr->next;
      delete (temp);
     }
start=NULL;
    
cout<<"\nList is emptied successfully.\n";
   
}

void node :: search(int s) //to search element
{
 struct node *ptr;
 ptr=new node;
 ptr=start;
 int data,flag=0,count=0;
 data=s;
 while(ptr!=NULL)
 {
  if(data==ptr->no)
   {
    cout<<"\n\nSEARCH FOUND!!!\n";
    flag=1;
    count++;
    cout<<"\n"<<data<<" is at "<<count<<" position in the linked list\n";
    ptr=ptr->next;
    break;
   }
  else
  {
   count++;
   ptr=ptr->next;
  }
  
  
 }
 
 
}



int main()
{
 int ch1,num;
 char ch2,ch3='n',ch4;

 do
 {
  cout<<"\n1 : Add numbers List \n2 : Display\n3 : Insert\n4 : Delete\n5 : Seperate Negative\n6 : Sort List\n7 : Count\n8 : Reverse\n9 : Delete full list.\n10 : search\n11 : Exit\nEnter choice : ";
  cin>>ch1;
  
   switch(ch1)
    {
     case 1:
      do
      {
       cout<<"\nAdd A Number : ";
       cin>>num;
       a.add(num);
       cout<<"\nAdd More Number (Y or N) : ";
       cin>>ch2;
      }while(ch2=='Y'||ch2=='y');
      break;
  
     case 2:
      cout<<"\nList A\n\n";
      a.disp();
      cout<<"\nList B\n\n";
      b.disp();
     break;
   
     case 3:
      a.insert();
     break;
      
     case 4:
      cout<<"\nEnter the number to be deleted : ";
      cin>>num;
      a.del(num);
     break;
      
     case 5:
      a.neg();
     break;  
    
     case 6:
      cout<<"\nA or B : ";
      cin>>ch4;
      if(ch4 == 'A' || ch4 == 'a' )
       a.sort();
      if(ch4 == 'B' || ch4 == 'b' )
       b.sort(); 
     break;
     
     case 7:
      cout<<"\nCount : "<<count;
     break;
     
     case 8:
      a.rev();
      b.rev();
     break;
     
     case 9:
       a.delf();
       break;
     
     case 10:
       int k;
       cout<<"\nEnter number to be searched : ";
       cin>>k;
       a.search(k);
       break;

     case 11:
      cout<<"\nDo you really want to exit (Y or N) : ";
      cin>>ch3;
     break;

    
     default:
      cout<<"\nEnter Correct Choice !\n";
     continue;
    }
   
     
 }while(ch3=='n'||ch3=='N');
 return 0;
}
