/*
Print the following pattern for the given N number of rows.
Pattern for N = 4
1
11
202
3003
Input format :
Integer N (Total no. of rows)
Contraints:
1 <= n <= 50
Output format :
Pattern in N lines
Sample Input :
5
Sample Output :
1
11
202
3003
40004
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
        cout<<i;
        int j=1;
        while(j<=i-1)
        {
            cout<<0;
            j++;
        }
        cout<<i<<endl;
        i++;
        
    }
    
}
