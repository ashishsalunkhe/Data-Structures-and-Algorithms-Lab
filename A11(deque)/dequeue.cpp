#include<iostream>
using namespace std;
# define max 6
class job
{
private:
      int Q[max];
      int front, rear;
      int item;
      
 public:
       job()
       {
       rear=-1;
       front=0;
       }
   
  int full();
  int empty();
  void en_f();
 void en_r();
  void de_f();
  void de_r();
  void getfront();
  void display();
  
}b;

int job::full()
{
 if(rear==max-1)
return 1;
else
return 0;
}

int job::empty()
{
 if(front>rear)
 return 1;
 else
 return 0;
}

void job::en_f()
{
 int i=0;
 if(full())
 cout<<" Queue is Full ";
 else
 cout<<"Enter the elements from front :";
 cin>>item;
 
 i=rear;
 while(i>=front)
 {
  Q[i+1]=Q[i];
  i--;
 }
 rear++;
 Q[front]=item;

}
void job::en_r()
{
 if(full())
 cout<<" Queue is Full ";
 else
 {
 cout<<"Enter the elements from rear :";
 cin>>item;
++rear;
 Q[rear]=item;

 }
}

void job::de_f()
{
 if(empty())
 cout<<" Queue is Empty  ";
 else
 {
  cout<<" The deleted element from front: ";
 cout<<Q[front];
 front++;
 cout<<endl;
 }
}

void job::de_r()
{
  if(empty())
 cout<<" Queue is Empty  ";
 else
 {
  cout<<" The deleted element from rear: ";
 cout<<Q[rear];
 rear--;
 cout<<endl;
 }
}
 
void job:: display()
{
 if(empty())
 cout<<" Queue is Empty  ";
 else
 cout<<"THE ELEMENTS ARE :"<<endl;
 for(int i=front;i<=rear;i++)
 {
  cout<<Q[i];
 }
}

int main()
{
 int a;
 char ch;
 do{
 cout<<"1.Insert from front"<<endl;
 cout<<"2.Insert from rear"<<endl;
 cout<<"3Delete from front"<<endl;
 cout<<"4.Delete from rear"<<endl;
  cout<<"5.Display"<<endl;
 cout<<"Enter the choice :";
 cin>>a;
 
 switch(a)
 {
  case 1: b.en_f();
          break;

  case 2: b.en_r();
          break;
  
  case 3: b.de_f();
          break;
  
  case 4: b.de_r();
          break;
  
  case 5: b.display();
         break;
 
  case 6:
         default:
         cout<<"\nwrong choice";
         }
        
    cout<<"Do you want to continue (y/n) :  ";
    cin>>ch;
 }while(ch=='Y' || ch=='y');
}

