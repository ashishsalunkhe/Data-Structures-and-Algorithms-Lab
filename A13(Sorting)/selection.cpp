#include<iostream>
using namespace std;
class sort
{
 float per[50];
 int i,j,n;
 
 public:
 void getdata()
 {
   cout<<"\nENTER TOTAL NO OF STUDENTS:\n";
   cin>>n;
   cout<<"\nENTER PERCENTAGE OF STUDENT\n";
   for(i=0;i<n;i++)
   {
     cin>>per[i];
   }
 }
  
 void selection()
 {
  for(i=0;i<n-1;i++)
   {
     for(j=i;j<n;j++)
      {
       if(per[i]>per[j])
         {
            float temp;
            temp=per[i];
            per[i]=per[j];
            per[j]=temp;
         }
      }
   }
   cout<<"\nDISPLAYING PERCENTAGE AFTER SELECTION SORT\n";
    for(i=0;i<n;i++)
   {
     cout<<per[i]<<endl;
   }
 }
 
 void bubble()
 {
  for(i=1;i<n;i++)
   {
     for(j=0;j<n-i;j++)
      {
       if(per[j]>per[j+1])
         {
            float temp;
            temp=per[j];
            per[j]=per[j+1];
            per[j+1]=temp;
         }
      }
   }
   cout<<"\nDISPLAYING PERCENTAGE AFTER BUBBLE SORT\n";
    for(i=0;i<n;i++)
   {
     cout<<per[i]<<endl;
   }
 }

 void top5()
 {
  
  for(i=0;i<n-1;i++)
   {
     for(j=i;j<n;j++)
      {
       if(per[i]<per[j])
         {
            float temp;
            temp=per[i];
            per[i]=per[j];
            per[j]=temp;
         }
      }
   }
    cout<<"\nDISPLAYING THE TOP 5 PERCENTAGE SCORED\n";
    for(i=0;i<5;i++)
   {
     cout<<per[i]<<endl;
   }
 
 }
};

int main()
{
 sort s;
 int ch,op;
 do
 {
    cout<<"\nPRESS:\n1.ENTER THE PERCENTAGE TO BE SORTED\n2.SELECTION SORT\n3.BUBBLE SORT\n4.TOP 5 HAVING HIGHEST PERCENTAGES\nENTER YOUR CHOICE\n";
    cin>>ch;
    switch(ch)
    {
     case 1:
           s.getdata();
           break;
     case 2:
           s.selection();
           break;
     case 3:      
           s.bubble();
           break;
     case 4:      
           s.top5();
           break;
  }
  cout<<"\nDO YOU WANT TO CONTINUE????(1 OR 0)";
  cin>>op;
 }while(op==1);
 return 0;
}

