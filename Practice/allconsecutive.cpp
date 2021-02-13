/*
Given an unsorted array of numbers, write a function that returns true if complete array consists of consecutive numbers. That means if we sort the array, all the elements are consecutive. Array contains only positive numbers.
Try doing it in O(n), where n is the size of given array.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Output Format :
true or false
Constraints :
1 <= N <= 10^6
Sample Input 1 :
6
3 7 2 5 4 6
Sample Output 1 :
true
Sample Input 2 :
6
1 9 2 4 0 3
Sample Output 2 :
false
*/
#include<iostream>
#include<climits>
using namespace std;

bool allconsecutive(int b[],int size)
{
    double sum = 0;
    int first_term = INT_MAX;
    for (int i = 0; i < size; i++)
    {   
        sum = sum + b[i];
        if(first_term > b[i])
        {
            first_term = b[i];
        }

    }
    double ap_sum = (size/2.0)*(2*first_term + (size-1));

    if(sum == ap_sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n,arr[100];
    cout<<"Enter the No of elements : ";
    cin>>n;

    cout<<"Enter the Elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    if(allconsecutive(arr,n))
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
}