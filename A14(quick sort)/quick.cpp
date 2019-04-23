#include<iostream>
using namespace std;


void qs(int[],int,int);
int part(int[],int,int);

void qs(int a[],int low,int up)
{
    int j;
    if(low<up)
    {
        j=part(a,low,up);
        qs(a,low,j-1);
        qs(a,j+1,up);
    }
}
 
int part(int a[],int low,int up)
{
    int pivot,i,j,temp;
    pivot=a[low];
    i=low;
    j=up+1;
    
    do
    {
        do
        {
            i++;
            
        }while(a[i]<pivot && i<=up);
        
        do
        {
            j--;
            
        }while(pivot<a[j]);
        
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);
    
    a[low]=a[j];
    a[j]=pivot;
    
    return(j);
}



int main()
{
    int a[50],n,i;
    cout<<"Enter Limit : \n";
    cin>>n;
    cout<<"\nEnter elements :\n";
    
    for(i=0;i<n;i++)
        cin>>a[i];
        
    qs(a,0,n-1);
    cout<<"\nAfter sorting :\n ";
    
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    
    return 0;        
}
   
 
 
 
