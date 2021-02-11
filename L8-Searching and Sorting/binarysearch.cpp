#include<iostream>
using namespace std;

int binarySearch(int arr[],int size, int key)
{
    int start,end,mid;
    start = 0;
    end = size-1;
    mid = (start + end)/2;

    while (start<=end)
    {
        if (arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid]<key)
        {
            start = mid + 1;
            mid = (start+end)/2;
        }
        else if(arr[mid]>key)
        {
            end = mid - 1;
            mid = (start+end)/2;
        }
        
    }
    return -1;
}

int main()
{
    int n,x,c;
    cout<<"Enter the no. of elements : ";
    cin>>n;
    int arr[100];
    cout<<"Enter the Elements in Sorted Order : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched : ";
    cin>>x;
    c = binarySearch(arr, n , x);
    if(c>=0)
    {
        cout<<x<<" is found at : "<<c;
    }
    else
    {
        cout<<"Element not Found";
    }
}