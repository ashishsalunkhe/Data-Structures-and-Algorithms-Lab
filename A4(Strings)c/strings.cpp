#include<iostream>
using namespace std;
int i,j,n,a,c,b,len1,len2;
char str1[100],str2[100],str3[100],str4[30];
class string
{
 public:
 
  void inp()
  {
    cout<<"\nEnter a string : \n";
    cin>>str1;
    
    cout<<"\nEntered string : "<<str1<<"\n";
   
  }
  
  int len() //length of string
  {
    len1=0;
    for(i=0;str1[i]!='\0';i++)
    {
     len1++;
    }
    return i;
  }
  
  void displen() //display length of string
  {
   cout<<"\nThe lenght of entered string:"<<len1<<"\n";
  }
  
  void copy() //copy string
  {
   for(i=0;str1[i]!='\0';i++)
   {
    str2[i]=str1[i];
   }
   cout<<"\nCopied string : "<<str2<<"\n";
   
  }
  
  void eq() //Equality of string
  {
   cout<<"\nEnter second string : \n";
   cin>>str2;
   len2=0;
   for(i=0;str2[i]!='\0';i++)
   {
    len2++;
   }
   if(len1==len2)
   {int k=0;
    for(i=0;str1[i]!='\0'||str2[i]!='\0';i++)
    {
      if(str1[i]==str2[i])
      {
       k++;
      }
    }
    if(k==len1)
    cout<<"\nThe two entered strings are equal.\n";
    else
    cout<<"\nThe two entered strings are not equal.\n";
  }
  else
  {
   cout<<"\nTHe two entered strings are not equal.\n";
  }
  }
  
  void rev() //reverse the first entered string.
  {
   for(i=len1-1,j=0;i>=0;i--,j++)   
   {
    str3[j]=str1[i];
   }
   /*for(i=0;str1[i]!='\0';i++)
   {
    str1[i]=str3[i];
   }*/
   cout<<"\nThe reverse of entered string : "<<str3<<"\n";
  }
  
  
 void conc() //concatenate the strings.
 {
   cout<<"\nEnter second string : \n";
   cin>>str2;
   len2=0;

   for(i=0;str1[i]!='\0';i++)
   {
     str4[i]=str1[i];
   }
   
   for(i=len1,j=0;str2[j]!='\0';i++,j++)
   {
    str4[i]=str2[j];
   }
   
   cout<<"\nConcatenation of two entered strings : \n"<<str4<<"\n";
 } 
}x;
int main()
{
 int ch;
 char ch1,ch2;
 do
{
 cout<<"\n\n******Enter your choice******\n";
 cout<<"\n1.Enter a string.\n2.Display length.\n3.Make copy of string.\n4.Check equality of strings.\n5.Reverse of string.\n6.Concatenate two strings.\n\n:\n";
 cin>>ch;
 
 switch(ch)
 {
 case 1:
 x.inp();
 break;
 
 case 2:
 x.len();
 x.displen();
 break;

 case 3:
 x.copy();
 break;
 
 case 4:
 x.eq();
 break;

 case 5:
 x.rev();
 break;

 case 6:
 x.conc();
 break;
 
 default: cout<<"\nINVALID CHOICE....TRY AGAIN!!!\n\n";
          continue;
 }
 
 cout<<"\nDo you want to try another operations (y/n) ? :";
 cin>>ch1;
}while(ch1=='y'||ch1=='Y');

 return 0;
}
