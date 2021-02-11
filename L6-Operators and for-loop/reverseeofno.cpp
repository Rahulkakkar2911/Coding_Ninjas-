/*
Write a program to generate the reverse of a given number N. Print the corresponding reverse number.
Note : If a number has trailing zeros, then its reverse will not include them. For e.g., reverse of 10400 will be 401 instead of 00401.
Input format :
Integer N
Output format :
Corresponding reverse number
*/
#include<iostream>
using namespace std;

int main() {
	// Write your code here
	long n;
    cin>>n;
    int reverse_no = 0;
    
    while(n>0)
    {
        int digit = n%10;
        reverse_no = reverse_no*10 + digit;
        n = n/10;
    }
    cout<<reverse_no;
}
