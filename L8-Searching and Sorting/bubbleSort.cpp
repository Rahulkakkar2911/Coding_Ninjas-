#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;                  
}                               

void bubblesort(int b[], int size)
{
    int end = size - 1;
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < end; j++)
        {
            if (b[j]>b[j+1])
            {
                swap(b[j], b[j+1]);
            }
            
        }
    end--;        
    }
    
}

int main()
{
    int n,arr[100];
    cout<<"Enter the No. Of elements : ";
    cin>>n;
    cout<<"Enter Elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }
    bubblesort(arr,n);
    for (int j = 0; j < n; j++)
    {
        cout<<arr[j]<<" ";
    }
        
}