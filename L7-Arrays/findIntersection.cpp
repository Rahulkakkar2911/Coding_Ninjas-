/*
You have been given two integer arrays/list(ARR1 and ARR2) of size M and N, respectively. You need to print their intersection; An intersection for this problem can be defined when both the arrays/lists contain a particular value or to put it in other words, when there is a common value that exists in both the arrays/lists.
Note :
Input arrays/lists can contain duplicate elements.

The intersection elements printed would be in the order they appear in the first array/list(ARR1)


Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the size of the first array/list.

Second line contains 'N' single space separated integers representing the elements of the first the array/list.

Third line contains an integer 'M' representing the size of the second array/list.

Fourth line contains 'M' single space separated integers representing the elements of the second array/list.
Output format :
For each test case, print the intersection elements in a row, separated by a single space.

Output for every test case will be printed in a separate line.
Sample Input 2 :
1
4
2 6 1 2
5
1 2 3 4 2
Sample Output 2 :
2 1 2
*/
#include<iostream>
#include<climits>

using namespace std;

void findIntersection(int b1[], int size1, int b2[], int size2)
{
    for (int i = 0; i < size1 ; i++)
    {
        for (int j = 0; j < size2 ; j++)
        {       
            if (b1[i]==b2[j])
            {   
                cout<<b1[i]<<" ";
                b2[j] = INT_MIN;
                break;
            }
            
        }
	}
    
}

int main()
{   
    int n,m;
    cout<<"Enter the No of elements in 1st Array : ";
    cin>>n;
    cout<<"Enter the No of elements in 2nd Array : ";
    cin>>m;

    int arr1[50],arr2[50];
    cout<<"Enter the Elements in 1st array : ";
    for(int i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the Elements in 2nd array : ";
    for (int i = 0; i < m; i++)
    {
        cin>>arr2[i];
    }
    
    findIntersection(arr1,n,arr2,m);
    
}