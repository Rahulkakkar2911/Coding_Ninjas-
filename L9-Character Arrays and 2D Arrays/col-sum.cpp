/*
Given a 2D integer array of size M*N, find and print the sum of ith column elements separated by space.
Input Format :
Line 1 : Two integers M and N (separated by space)
Next M lines : ith row elements (separated by space)
Output Format :
Sum of every ith column elements (separated by space)
Constraints :
1 <= M, N <= 10^3
Sample Input :
4 2
1 2
3 4
5 6
7 8
Sample Output :
16 20
*/
#include<iostream>
using namespace std;

int main()
{
    int a[100][100];
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {   
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum = sum + a[i][j];    
        }
        cout<<sum<<" ";    
    }
    
}