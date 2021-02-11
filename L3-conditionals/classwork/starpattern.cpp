/*
Print the following pattern
Pattern for N = 4
   *
  ***
 *****
*******
The dots represent spaces.
Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
*/
#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
    cin>>n;
    int i = 1;
    int t = 0;
	// t is for additional coloumns
    while(i<=n)
    {
        int k = 1;
        //spaces
        while(k<=n-i)
        {
            cout<<" ";
            k++;
        }
    //stars
        int j=1;
        while(j<=2*i-1)
        {
            cout<<"*";
            j++;
            t++;
        }
    	cout<<endl;
        i++;

    }  
}