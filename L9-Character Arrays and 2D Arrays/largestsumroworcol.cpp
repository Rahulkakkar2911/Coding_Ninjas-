/*
Largest Row or Column

For a given two-dimensional integer array/list of size (N x M), you need to find out which row or column has the largest sum(sum of all the elements in a row/column) amongst all the rows and columns.
Note :
If there are more than one rows/columns with maximum sum, consider the row/column that comes first. And if ith row and jth column has the same largest sum, consider the ith row as answer.
Input Format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First line of each test case or query contains two integer values, 'N' and 'M', separated by a single space. They represent the 'rows' and 'columns' respectively, for the two-dimensional array/list.

Second line onwards, the next 'N' lines or rows represent the ith row values.

Each of the ith row constitutes 'M' column values separated by a single space.
Output Format :
For each test case, If row sum is maximum, then print: "row" <row_index> <row_sum>
OR
If column sum is maximum, then print: "column" <col_index> <col_sum>
It will be printed in a single line separated by a single space between each piece of information.

Output for every test case will be printed in a seperate line.
 Consider :
If there doesn't exist a sum at all then print "row 0 -2147483648", where -2147483648 or -2^31 is the smallest value for the range of Integer.
Constraints :
1 <= t <= 10^2
0 <= N <= 10^3
0 <= M <= 10^3
Time Limit: 1sec
Sample Input 1 :
1
2 2 
1 1 
1 1
Sample Output 1 :
row 0 2
Sample Input 2 :
2
3 3
3 6 9 
1 4 7 
2 8 9
4 2
1 2
90 100
3 40
-10 200
Sample Output 2 :
column 2 25
column 1 342
*/
#include<iostream>
#include<climits>
using namespace std;

void largestsum(int arr[][100], int n ,int m)
{   
    

    long int r_sum = INT_MIN;
    long sum=INT_MIN;
    int r_index=0;
    int a = 1;
    if(n == 1 && m==1)
    {
        cout<<"row 0 "<<r_sum;
        return;
    }
    for (int i = 0; i < n; i++)
    {   
        sum = 0;
        for (int j = 0; j < m; j++)
        {   
            sum = sum + arr[i][j];
        }
        if (sum > r_sum)
        {
            r_sum = sum;
            r_index = i;
            a=1;
        }
    }
    long int c_sum = INT_MIN;
    sum = INT_MIN;
    int c_index=0;
    for (int i = 0; i < m; i++)
    {   
        sum = 0;
        for (int j = 0; j < n; j++)
        {   
            sum = sum + arr[j][i];
        }
        
        if (sum > c_sum)
        {
            c_sum = sum;
            c_index = i;
            a=0;
        }
        
    }
    
    // if(r_sum>c_sum && r_index<c_index)
    // {
    //     cout<<"row "<<r_index<<" "<<r_sum;
    // }
    // else if(r_sum>c_sum && c_index<r_index)
    // {
    //     cout<<"column "<<c_index<<" "<<c_sum;
    // }
    // else if(c_sum>r_sum && r_index<c_index)
    // {
    //     cout<<"row "<<r_index<<" "<<r_sum;
    // }
    // else if(c_sum>r_sum && c_index<r_index)
    // {
    //     cout<<"column "<<c_index<<" "<<c_sum;
    // }
    // else if(r_index == c_index)
    // {
    //     if(r_sum>=c_sum)
    //     {
    //         cout<<"row "<<r_index<<" "<<r_sum;        
    //     }
    //     else if(c_sum>=r_sum)
    //     {
    //         cout<<"column "<<c_index<<" "<<c_sum;        
    //     }
    // }
    if (a == 1)
    {
        cout << "row " << r_index << " " << r_sum;
    }
    else
    {
        cout << "column " << c_index << " " << c_sum;
    }
    
}
int main()
{
    int n,m;
    int ar[100][100];
    cout<<"Enter the No of Rows : ";
    cin>>n;
    cout<<"Enter the No of Cols : ";
    cin>>m;
    cout<<"Enter the elements rowvise : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>ar[i][j];
        }
        
    }
    largestsum(ar,n,m);
}