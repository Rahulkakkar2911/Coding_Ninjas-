#include<iostream>
using namespace std;

void sort012(int b[],int size,int n0,int n1,int n2)
{
    for (int i = 0; i < size; i++)
    {
        if (i>=0 && i<n0)
        {
            b[i] = 0;
        }
        else if (i>=n0 && i<n0+n1)  
        {
            b[i] = 1;
        }
        else if (i>=n1+n0)
        {
            b[i] = 2;
        }
        
        
    }
    
    
}

int main()
{
    int count=0,arr[100];
    int n,count0=0,count1=0,count2=0;
    cout<<"Enter no. of Elements : ";
    cin>>n;
    cout<<"Enter Elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        else if (arr[i] == 1)
        {
            count1++;
        }
        else if(arr[i]==2)
        {
            count2++;
        }
        
    }
    sort012(arr,n,count0,count1,count2);
    cout<<"Sorted Array : ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}