/*
Given a decimal number (integer N), convert it into binary and print.
The binary number should be in the form of an integer.
Note: The given input number could be large, so the corresponding binary number can exceed the integer range. So you may want to take the answer as long for CPP and Java.


Note for C++ coders: Do not use the inbuilt implementation of "pow" function. The implementation of that function is done for 'double's and it may fail when used for 'int's, 'long's, or 'long long's. Implement your own "pow" function to work for non-float data types.
Input format :
Integer N
Output format :
Corresponding Binary number (long)
*/
#include<iostream>
#include<cmath>
using namespace std;
long long pow_fun(int n)
{
    long long product = 1;
    int i = 1;
    while(i<=n)
    {
    	product = product*10;
        i++;
    }
    return product;
}
int main() {
	// Write your code here
	long decimal;
    long long rev_bin = 0;
    cin>>decimal;
    int power = 0;
    while(decimal > 0)
    {
        int digit = decimal%2;
        rev_bin = rev_bin + digit*pow_fun(power);
        decimal = decimal/2;
        power++;
    }
    cout<<rev_bin;    
}
