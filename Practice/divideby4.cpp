/*
Division of 4
Level EASY
Given an array, update each element of the array by the value obtained by dividing the element by 4 (take only integer part). If the value obtained by dividing element by 4 comes out to be 0, then update element with value -1.
Note : Do not return or print array and make changes in same array.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Output Format :
N elements of array, separated by space.
*/
#include<iostream>
using namespace std;

void divideby4(int b[], int size)
{
    
    for (int i = 0; i < size; i++)
    {
        b[i] = b[i]/4;
        if(b[i]==0)
        {
            b[i]=-1;
        }    
    }
    
}

int main()
{
    int n;
    cin>>n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    divideby4(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}