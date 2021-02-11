/*
Print the following pattern for the given number of rows.
Note: N is always odd.
Pattern for N = 5
  *
 ***
*****
 ***
  * 
Input format :
N (Total no. of rows and can only be odd)
Output format :
Pattern in N lines
*/

#include<iostream>
using namespace std;


int main() {
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
  	int n,n1,n2;
    cin>>n;
    n1 = (n+1)/2;
    n2 = (n1-1);
    int i = 1;
    while(i<=n1)
    {
        int spaces = 1;
        while(spaces<=n1-i)
        {
            cout<<" ";
            spaces++;
        }
        int j = 1;
        while(j<=2*i-1)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    
    i=n2;
    while(i>=1)
    {	int spaces = 1;
        while(spaces<=n2-i+1)
        {
            cout<<" ";
            spaces++;
        }
        int j = 1;
        while(j<=2*i-1)
        {
            cout<<"*";
            j++;
        } 
        cout<<endl;
        i--;
    }
}
