/*
Selection Sort - Complexity - O(n^2)
*/


#include<iostream>
#include<climits>
using namespace std;


void selectionsort(int input[], int size)
{
    int start = 0;
    while (start<size-1)      //till n - 1 rounds from 0
    {
        /* code */
    int min = INT_MAX;
    int index = -1;
    for (int i = start; i < size; i++)   // for finding min index for decreasing size array.
    {
        if (min>input[i])
        {
            min = input[i];
            index = i;
        }
        
    }
    // swapping min value and starting value of decreasing array
    int temp = input[index];
    input[index] = input[start];
    input[start] = temp;
    start++;
    }
}

int main()
{
    int n, arr[100];
    cout<<"Enter No of elements : ";
    cin>>n;

    cout<<"Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    selectionsort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}