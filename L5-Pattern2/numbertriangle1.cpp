/*
Print the following pattern for the given number of rows.
Pattern for N = 4
    1
   232
  34543
 4567654
The dots represent spaces.

Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
*/
#include <iostream>
using namespace std;

int main() {
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin>>n;
    
    int i = 1;
    while(i<=n)
    {
        int spaces = 1;
        while(spaces<=n-i)
        {
            cout<<" ";
            spaces++;
        }
        int val = i;
        int j = 1;
        while(j<=i)
        {
            cout<<val;
            j++;
            val++;
        }
        j = i - 1;
        int val2 = 2*(i-1);
        while(j>=1)
        {
            cout<<val2;
            j--;
            val2--;
        }
        cout<<endl;
        i++;
    }

}
