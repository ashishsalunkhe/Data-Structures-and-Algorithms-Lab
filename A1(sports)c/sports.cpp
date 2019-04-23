#include<iostream>
using namespace std;
int ct,bd,cnt=0,t,c[10],b[10];

class st
{
 public:
  int t1=0,t2=0;
  void acpC() //cricket players entry
   {
    cout<<"\nno.of students playing cricket : ";
    cin>>ct;
      
    cout<<"\nEnter their roll nos.\n";
     for(int i=0; i<ct ; i++)
       cin>>c[i];
   } 
 void acpB() //badminton players entry
   {
    cout<<"\nno.of students playing badminton : ";
    cin>>bd;
    
    cout<<"\nEnter their roll nos. :\n";
     for(int i=0; i<bd ; i++)
       cin>>b[i];
   }
   

   void dispall() //students playing atleast one game
   {
     
     
     cout<<"\nList of students playing either cricket, badminton or both\n";
     for(int i=0;i<ct;i++)
       cout<<c[i]<<"\n";
      for(int i=0;i<bd;i++)
       {
        for(int j=0;j<ct;j++)
         {
          if(b[i] == c[j])
           {
            t2 = 0;
            break;
           }
          else
           t2 = 1;
         }
         
         if(t2==1)
         {
         cout<<b[i]<<"\n";
         }
       }
     
   }
   
   
    void dispckt() //only cricket players display
    {    
      cout<<"\nList of Students playing only cricket  \n";
   
      for(int i=0;i<ct;i++)
       {
       for(int j=0;j<bd;j++)
        {
         if(c[i] == b[j])
         {
          t1 = 0;
          break;
         } 
         else
          t1 = 1;
        }
        if(t1 == 1)
        cout<<c[i]<<"\n";
       }
    }
    
    
    void dispbad() //only badminton players display
    {
     cout<<"\nList of Students playing only badminton \n";
   
      for(int i=0;i<bd;i++)
       {
        for(int j=0;j<ct;j++)
         {
          if(b[i] == c[j])
           {
            t2 = 0;
            break;
           }
          else
           t2 = 1;
         }
         
         if(t2==1)
         {
         cout<<b[i]<<"\n";
         cnt++;
         }
       }
     }
     
     void dispboth() //cricket and badminton players
     {  
     cout<<"\nList of Students playing both cricket and badminton\n";
   
      for(int i=0;i<ct;i++)
       for(int j=0;j<bd;j++)
        {
         if(c[i] == b[j])
          cout<<c[i]<<"\n";
        }
       
      }

 int int_count()
     {  
	int in_c=0;   
      for(int i=0;i<ct;i++)
      { for(int j=0;j<bd;j++)
        {
         if(c[i] == b[j])
            in_c++;
        }

       }
	
	return in_c;
      }
      
      
      void dispnone() //no players
       {	
		int in_c=int_count();
		cout<<"total::"<<t;
		cout<<"ct ::"<<ct;
		cout<<"bd ::"<<bd;
		cout<<"in_c ::"<<in_c;
      cout<<"\nNumber of students playing neither cricket nor badminton: "<<"\n"<<(t-(ct+bd)+in_c)<<"\n"; 
        }
        
    

}x;

int main()
{
int ch1;
char ch2,ch3;
do
{
 cout<<"\nEnter total no. of students : ";
 cin>>t;

  x.acpC();
  x.acpB();
 do
{
 cout<<"\nEnter your choice :\n1.Students playing either cricket or badminton or both\n2.students playing both cricket and badminton\n3.Students playing only cricket\n4.Students playing only badminton\n5.Number of students neither playing any game\n";
 cin>>ch1;

switch(ch1)
{ 
  
  case 1 : x.dispall();
           break;
  case 2 : x.dispboth();
           break;
  case 3 : x.dispckt();
           break;
  case 4 : x.dispbad();
           break;
  case 5 : x.dispnone();
           break;
  default : cout<<"\nInvalid choice...TRY AGAIN!!!\n";
            continue;
}

 cout<<"\nDo you want to try another option (y/n)?\n";
 cin>>ch3;
}while(ch3=='y'||ch2=='Y');
cout<<"\nDo you want to try again for another set (y/n)?\n";
cin>>ch2;
 

}while(ch2=='y'||ch2=='Y');
 return 0;
}
