/*
Given an integer N, print all the prime numbers that lie in the range 2 to N (both inclusive).
Print the prime numbers in different lines.
Input Format :
Integer N
Output Format :
Prime numbers in different lines
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
    int n;
    cin>>n;
    
    for(int i = 2; i <= n ; i++)
    {	
    	bool isprime = false;    
        for(int j = 2; j < i ; j++)
        {
            if(i % j == 0)
            {	
                isprime = true;
                break;
            }
            
        }
    	if(!isprime)
        {
            cout<<i<<endl;
        }
        
    }
}