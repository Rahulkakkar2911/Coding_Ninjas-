/*
Given a binary number as an integer N, convert it into decimal and print.
Input format :
An integer N in the Binary Format
Output format :
Corresponding Decimal number (as integer)
*/
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	// Write your code here
	long binary;
    cin>>binary;
    long decimal = 0;
	int power = 0;
    while(binary>0)
    {	
        int digit = binary % 10;
        decimal = decimal + digit*pow(2,power);
        power++;
        binary = binary / 10;
    }
    cout<<decimal;
}
