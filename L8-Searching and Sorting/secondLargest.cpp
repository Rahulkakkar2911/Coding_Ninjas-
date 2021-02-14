#include<iostream>
#include<climits>
using namespace std;

int secondLargest(int b[],int size)
{
    int max=b[0],secondlargest=INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (max<b[i])
        {
            secondlargest = max;
            max = b[i];
        }
        else if (max>b[i] && b[i]>secondlargest && secondlargest==INT_MIN)
        {    
            secondlargest = b[i];
        }
        
        
    }
    return secondlargest;
}

int main()
{
    int n;
    int arr[100];
    cout<<"Enter No. of Elements : ";
    cin>>n;

    cout<<"Enter Elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int secondlargest = secondLargest(arr,n);
    cout<<secondlargest;
    
}