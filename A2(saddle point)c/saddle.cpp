#include<iostream>
using namespace std;
class saddle
{
private: int a[10][10],small[10],big[10];
int r,c,i,j;
public:
  void accept()
  {
    cout<<"Enter dimensions of matrix = ";
    cin>>r>>c;
    cout<<"Enter matrix = ";
    for(i=0;i<r;i++)
      {
        for(j=0;j<c;j++)
        {
          cin>>a[i][j];
        }
      }
   }
   
   
   void display()
   {
      cout<<"Entered matrix is = "<<endl;
      for(i=0;i<r;i++)
      { 
        cout<<endl;
        for(j=0;j<c;j++)
        {
          cout<<a[i][j]<<" ";
        }
      }
      cout<<endl;
   }  
   
   
   void row()
   {  
      for(i=0;i<r;i++)
      {
      small[i]=a[i][0];
        for(j=0;j<c;j++)
        {
          if(a[i][j]<small[i])
          small[i]=a[i][j];
        }
      } 
    } 
 
        
    void col()
    {     
      for(j=0;j<c;j++)
      {
      big[i]=a[0][j];
        for(i=0;i<r;i++)
        {
          if(a[i][j]>big[j])
          big[j]=a[i][j];
        }
      }
     }
  
  
  void compare()
  {
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        if(small[i]==big[j])
        cout<<small[i]<<endl;
      }
    }
  }
    
}obj;

int main()
{
obj.accept();
obj.display();
obj.row();
obj.col();
obj.compare();
}
