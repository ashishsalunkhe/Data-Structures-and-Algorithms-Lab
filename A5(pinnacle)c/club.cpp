#include<iostream>
using namespace std;

struct node
{
 int prn;
 string name;
 string pos;
 node *next;
};

int members=0;
class club
{
 private:
  node *pres,*memend,*sec;
  
 public:
  club()
  {
   pres = NULL;
   memend = NULL;
   sec = NULL;
  }
  
  void add();
  void display();
  void del();
  inline node* head()
  {
   return pres;
  }
  inline node* tail()
  {
   return sec;
  }
};

void club::add()
{
 node *ptr = new node;
 node *tmp = new node;
 node *curr = new node;
 if(pres == NULL)
 {
  cout<<"\nEnter President PRN  : ";
  cin>>ptr->prn;
  cout<<"\nEnter President Name : ";
  cin>>ptr->name;
  string position="President";
  ptr->pos=position;
  tmp=ptr;
  pres=tmp;
  pres->next=sec;
  members++;
 }
 else
 {
  if(sec == NULL)
  {
  cout<<"\nEnter Secretary PRN  : ";
  cin>>ptr->prn;
  cout<<"\nEnter Secretary Name : ";
  cin>>ptr->name;
  string position="Secretary";
  ptr->pos=position;
  tmp=ptr;
  sec=tmp;
  sec->next=NULL;
  members++;
  }
  else
  {
   cout<<"\nEnter Member PRN  : ";
   cin>>ptr->prn;
   cout<<"\nEnter Member Name : ";
   cin>>ptr->name;
   string position="Member";
   ptr->pos=position;
   tmp=ptr;
   members++;
   if(memend==NULL)
   {
    memend=tmp;
    memend->next=sec;
    pres->next=memend;
   }
   else
   {
    curr=tmp;
    curr->next=sec;
    memend->next=curr;
    memend=curr;
   }
  }
 }
}

void club::display()
{
 node *tmp=pres;
 while(tmp!=NULL)
 {
  cout<<"\n"<<tmp->pos<<" PRN  : "<<tmp->prn;
  cout<<"\n"<<tmp->pos<<" Name : "<<tmp->name<<endl;
  tmp=tmp->next;
 }
}

void club::del()
{
 node *free = new node;
 node *tmp;
 int pno,count=1;
 char ch;
 cout<<"\nEnter PRN of Member to be deleted : ";
 cin>>pno;
 if(pres->prn==pno||sec->prn==pno)
 {
  if(pres->prn==pno)
   tmp=pres;
  else
   tmp=sec;
   cout<<"\nPRN is of "<<tmp->pos<<".Do you want to change "<<tmp->pos<<" (Y/N) : ";
   cin>>ch;
   if(ch=='Y'||ch=='y')
   {
    cout<<"\nEnter PRN of new "<<tmp->pos<<"  : ";
    cin>>tmp->prn;
    cout<<"\nEnter Name of new "<<tmp->pos<<" : ";
    cin>>tmp->name;
   } 
 }
 else
 {
  node *tmp=pres;
  while(tmp->next->prn!=pno)
  {
   tmp=tmp->next;
   count++;
  }
  if(count==members)
  {
   cout<<"\n\nPRN not found\nEnter Valid PRN\n";
  }
  else
  {
   free=tmp->next;
   tmp->next=tmp->next->next;
   delete(free);
   cout<<"\nMember Deleted\n";
   members--;
  }
 }
}

void reverse(struct node *tmp)
{
 if (tmp == NULL)
 {
  return;
 }
 reverse(tmp->next);
 cout<<"\n"<<tmp->pos<<" PRN  : "<<tmp->prn;
 cout<<"\n"<<tmp->pos<<" Name : "<<tmp->name<<endl;
}

void conc(club A,club B)
{
 node*tmp=A.tail();
 tmp->next=B.head();
}

int main()
{
 club A;
 club B;
 char run='y';

 do
 {
  int choice;
  cout<<"\n(1) : Add Members to Pinnacle Club A\n(2) : Display Club List\n(3) : Delete Members from Pinnacle Club A\n(4) : Compute Total Number of Members\n(5) : Reverse List\n(6) : Add Members to Pinnacle Club B\n(7) : Concatenate Club A & B\n(8) : Exit Program\n\nEnter Your Choice : ";
  cin>>choice;
  
  switch(choice)
  {
   case 1:
     A.add();
     A.add();
     char ch;
     do
     {
      A.add();
      cout<<"\nDo you want to Add more Members ? (Y/N) : ";
      cin>>ch;
     }while(ch=='Y'||ch=='y');
   break;
   
   case 2:
    cout<<"\n\n-----PINNACLE CLUB-----\n\n";
    A.display();
   break;
   
   case 3:
    A.del();
   break;
   
   case 4:
    cout<<"\nTotal Number of Members in Club : "<<members;
   break;
   
   case 5:
     cout<<"\nReverse of Club List";
     reverse(A.head());
   break;
   
   case 6:
     B.add();
     B.add();
     char ch1;
     do
     {
      B.add();
      cout<<"\nDo you want to Add more Members ? (Y/N) : ";
      cin>>ch;
     }while(ch1=='Y'||ch1=='y');
   break;
   
   case 7:
    conc(A,B);
   break;
   
   case 8:
    char exit;
    cout<<"\nDo you really want to Exit (Y/N) : ";
    cin>>exit;
    if(exit=='Y'||exit=='y')
     run='n';
   break;
   
   default:
    cout<<"\nEnter correct option\n";
   continue;
  }
 }while(run=='y');

 return 0;
}

