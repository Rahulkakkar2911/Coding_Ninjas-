/*
Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.
Input format :
Integer x
Output format :
Terms of series (separated by space)
*/
#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int x;
    cin>>x;
    int term;
    int j = 1;
    int i = 1;
    while (j<=x)
    {
        term = 3*i + 2;
        if(!(term % 4 == 0))
        {
            cout<<term<<" ";
            j++;
        }
        i++;
    }
    
}
