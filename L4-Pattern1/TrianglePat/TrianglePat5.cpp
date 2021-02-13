/*
Print the following pattern for the given N number of rows.
Pattern for N = 4
1
11
121
1221
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Sample Input :
5
Sample Output :
1
11
121
1221
12221
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<1<<endl;
    int i = 1;
    while (i<=n-1)
    {
        cout<<1;
        int j=1;
        while(j<=i-1)
        {
            cout<<2;
            j++;
        }
        cout<<1<<endl;
        i++;
        
    }
    
}
