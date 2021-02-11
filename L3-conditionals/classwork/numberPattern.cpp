/*
Print the following pattern
Pattern for N = 4
1
23
345
4567
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
     
    
  while(i<=n)
  {
    int val = i;
    int j = 1; 
    while(j<=i)
    {
        cout<<val;
    	j++;
        val = val+1;
    }
    i++;
    
    cout<<endl;
    
  }

}


