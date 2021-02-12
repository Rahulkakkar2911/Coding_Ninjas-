#include<iostream>
using namespace std;

void insertionsort(int b[],int size)
{   int j;
    for (int i = 1; i < size; i++)
    {
        int current = b[i];
        for (j = i-1; j>=0; j--)
        {
            //shifting sorted elements to right
            if (current<b[j])
            {
                b[j+1] = b[j];
            }
            // current is greater than b[j]
            else
            {
                break;
            }
        }
        b[j+1]=current;
    }
    
}

int main()
{
    int n, arr[100];
    cout<<"Enter no. of elements : ";
    cin>>n;

    cout<<"Enter Elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    insertionsort(arr,n);
    cout<<"Sorted Array : ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
        
}