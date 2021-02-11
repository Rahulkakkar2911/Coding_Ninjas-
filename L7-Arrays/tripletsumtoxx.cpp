/*
You have been given a random integer array/list(ARR) and a number X. Find and return the number of triplets in the array/list which sum to X.
Note :
Given array/list can contain duplicate elements.
Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the size of the first array/list.

Second line contains 'N' single space separated integers representing the elements in the array/list.

Third line contains an integer 'X'.
Output format :
For each test case, print the total number of triplets present in the array/list.

Output for every test case will be printed in a separate line.
*/
#include<iostream>
#include<climits>
using namespace std;

int tripletSumToX(int b[], int size, int sum)
{   
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)   //     j= i+1  to get unique triplet
        {
            for (int k = j+1; k < size; k++)    //     k= j+1  to get unique triplet
            {
                if (b[i] + b[j] + b[k] == sum)
                {
                    count++;
                }
            }
        }
    }
    return count;
}

int main()
{
    int n,x;
    cout<<"Enter the no of elements : ";
    cin>>n;
    int arr[100];
    cout<<"Enter the Elements : ";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter Sum : ";
    cin>>x;
    int no_of_pairs = tripletSumToX(arr,n,x);
    cout<<no_of_pairs;
}