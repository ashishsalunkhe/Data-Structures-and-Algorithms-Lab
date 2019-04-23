#include<iostream>
using namespace std;
int r,c,d,i,j,n,t,f,k,flagu,flagl,flagd,c1,z;
class matrix
{
 int a[10][10],b[10][10],t[10][10],e[10][10],m[10][10];
 public:
  
   void accept() //martrix input
   {
    cout<<"\nEnter the elements of the matrix a :\n";
    for(i=0;i<r;i++)
    {
     for(j=0;j<c;j++)
     {
      cout<<"\nEnter element ["<<i+1<<"] ["<<j+1<<"] of matrix:";
      cin>>a[i][j];
     }
    }
    
   }
   
   void display() //matrix display;
   {
     cout<<"\nEntered matrix :\n";
    for(i=0;i<r;i++)
    {
     for(j=0;j<c;j++)
     {
      
      cout<<" "<<a[i][j];
     }
     cout<<"\n";
    }
   }
   
   void type() //matrix classification
   {
   int flagd=1,count=0;
    flagu=1;flagl=1;
     if(r==c)
     {
      for(i=0;i<r;i++)
      {
       for(j=0;j<c;j++)
       {
        if(j<i) //upper triangular check
        {
         if(a[i][j]!=0)
          flagu=0;
        }
        if(j>i)  //lower triangular check
        {
         if(a[i][j]!=0)
          flagl=0;
        }
        if(i==j) //daigonal check
        {
         if(a[i][j]==0)
           {
            count++;
           }  
       }
      }
     }
      if(count!=0)
      {
       flagd=0;
      }
      
     if(flagu==1&&flagl==1&&flagd==1)
      cout<<"\nEntered matrix is daigonal matrix";
     else if(flagu==1)
           {cout<<"\nEntered matrix is upper triangular matrix\n";}
           else if(flagl==1)
           {cout<<"\nEmtered matrix is lower triangular matrix\n";}
           else
            cout<<"\nEntered matrix is not upper, lower or daigonal matrix\n";
   
    }
       
     
     else
     cout<<"\nEntered matrix is not square matrix.\nSo operations are not possible";
   }
   void transpose()
   {
    for(i=0;i<c;i++)
    {
      for(j=0;j<r;j++)
      {
        t[j][i]=a[i][j];
      }
    }
    cout<<"transpose of given matrix is:";
    for(j=0;j<c;j++)
    {
      for(i=0;i<r;i++)
      {
       cout<<" "<<t[j][i];
      }
       cout<<"\n";
    }
    }
   
   void diagonalsum() //sum of daigional elements
   {
    if(r==c)
    {
     int sum=0;
     for(i=0,j=0;i<r,j<c;i++,j++)
     {
      sum=sum+a[i][j];
     }
    
    
    cout<<"\nThe sum of diagonal elements:\n"<<sum<<"\n";
   }
   else
   cout<<"\nEntered matrix is not square matrix.\nSo operations are not possible";  
   }
  void addition()   //addition of matrix
   {
     cout<<"\nEnter the elements of the matrix b:\n";
    for(i=0;i<r;i++)
    {
     for(j=0;j<c;j++)
     {
      cout<<"\nEnter element ["<<i+1<<"] ["<<j+1<<"] of matrix:";
      cin>>b[i][j];
     }
    }
     cout<<"addition of matrix is:\n";
     for(i=0;i<r;i++)
     {
      for(j=0;j<c;j++)
      {
        int sum1=0;
        sum1=a[i][j]+b[i][j];
        cout<<" "<<sum1<<endl;
      }     
     }
   
   }
   void substraction()
   {
    cout<<"substaction of matrix is:\n";
     for(i=0;i<r;i++)
     {
      for(j=0;j<c;j++)
      {
        int sub=0;
        sub=a[i][j]-b[i][j];
        cout<<" "<<sub<<endl;
      }     
     }
    }
   void multiply() //multiplication of matrix
   {
     cout<<"enter no. of column of second matrix:";
     cin>>c1;
     cout<<"enter the element of matrix E:";
     for(i=0;i<c;i++)
     {
       for(j=0;j<c1;j++)
       {
         cout<<"\nEnter element ["<<i+1<<"] ["<<j+1<<"] of matrix:";
         cin>>e[i][j];
       }
     }
     
     for(i=0;i<r;i++)
     {
   
       for(j=0;j<c1;j++)
       {
            m[i][j]=0;
         for(z=0;z<c;z++)
         {
           m[i][j]=m[i][j]+(a[i][z]*b[z][j]);
         }
       }
     }
     cout<<"multiplication of matrix is:\n";
      for(i=0;i<r;i++)
    {
     for(j=0;j<c1;j++)
     {
      
      cout<<" "<<m[i][j];
     }
     cout<<"\n";
    }
   }
   
}A;
int main()
{
  cout<<"\nEnter the no. of rows and colums:\n";
  cin>>r>>c;
  A.accept();
  A.display();
  A.type();
  A.transpose();
  A.diagonalsum();
  A.addition();
  A.substraction();
  A.multiply();
  return 0;
}

