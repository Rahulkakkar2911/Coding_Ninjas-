/*
Nth Fibonacci Number
Send Feedback
Nth term of fibonacci series F(n) is calculated using following formula -
    F(n) = F(n-1) + F(n-2), 
    Where, F(1) = F(2) = 1
Provided N you have to find out the Nth Fibonacci Number.
Input Format :
Integer n
Output Format :
Nth Fibonacci term i.e. F(n)
*/
#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
	int n;
    cin>>n;
    int a,b,c;
    a = 0;
    b = 1;
    if(n==1)
    {
        cout<<"0";
    }
    else if(n==2)
    {    
        cout<<"1";
    }
    else{
        
        for(int i = 1;i<=n;i++)
    {
     	c = a+b;
        a = b;
        b = c;
    }
    cout<<a;
    }
       
}