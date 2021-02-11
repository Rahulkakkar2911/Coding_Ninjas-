/*
Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.
Note : For this question, you can assume that 0 raised to the power of 0 is 1


Input format :
Two integers x and n (separated by space)
Output Format :
x^n (i.e. x raise to the power n)
*/
#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int x,n;
    cin>>x>>n;
    int result=1;
    
    while(n>0){
    	result = result*x;
        n--;
    }
    cout<<endl<<result;
}
