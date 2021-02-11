/*
Multiples of 2 and 3
Level EASY
Find and return sum of all elements in an array which are either divisible by 2 or by 3.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Output Format:
Single integer which is sum of all those numbers which satisfy the specified condition.
*/
#include<iostream>
using namespace std;

int sumofmultiples(int b[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if(b[i]%2==0 || b[i]%3==0)
        {
            sum = sum + b[i];
        }
    }
    return sum;
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
    int sum = sumofmultiples(arr, n);
    cout<<sum;
}