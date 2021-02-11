/*
Given a number N, print sum of all even numbers from 1 to N.
Input Format :
Integer N
Output Format :
Required Sum
*/
//sol
#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  	int n;
    cin>>n;
	int sum = 0;
    
    int i = 1;
    
    while(i<=n)
    {
        
        if(i%2==0)
        {
            sum = sum + i;
        }
        i++;
    }
    cout<<sum;
    
}


