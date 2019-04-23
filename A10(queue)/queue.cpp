#include<iostream>
using namespace std;
# define max 6
class job
{
        int Q[max];
        int front,rear;
        int item;
        
        public:
      job()
      {
         rear=-1;
         front=0;
      }
        int isfull();
        int isempty();
        int enqueue();
        int dequeue();
        int display();
        int getfront();
};

int job::isfull()
{
  if(rear==max-1)
  return 1;
  else 
  return 0;
}

int job::isempty()
{
  if(front>rear)
  return 1;
  else
  return 0;
}
int job::enqueue()
{
  if(isfull())
  cout<<"queue overflow";
  else
{
        cout<<"enter the job number";
        cin>>item;
        rear++;
        Q[rear]=item;
        return item;
}
}
int job::dequeue()
{
        if(isempty())
        cout<<"queue underflow";
        else
        { 
           cout<<"the deleted element is:";
           cout<<Q[front];
           cout<<endl;
           front++;
        }
}
int job::getfront()
{
              
        if(isempty())
        cout<<"queue underflow";
        else
        { 
           
           cout<<Q[front];
        }
}

int job::display()
{
        if(isempty())
        
        cout<<"queue is empty";
        else
        cout<<"contents of the job are";
        for(int i=front;i<=rear;i++)
          {
            cout<<Q[i]<<" ";
          }
}
int main()
{
    job r;
    int ch;
    char ans;
    
    
    do
 {
 cout<<"enter your choice \n1.insert \n2.delete \n3.front \n4.display\n";
    cin>>ch;
   switch(ch)
   
   {
case 1:
r.enqueue();
break;
      
case 2:
r.dequeue();
break;          
          
case 3:
r.getfront();
break;          
          
case 4:
r.display();
break;          
          
default:
cout<<"enter valid choice";
}
cout<<"do u want to continue(y/n):";
cin>>ans;
}while(ans=='y'||ans=='Y');
return 0;
}          
