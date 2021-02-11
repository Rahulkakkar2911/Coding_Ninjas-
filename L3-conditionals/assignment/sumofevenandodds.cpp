/*
Write a program to input an integer N and print the sum of all its even digits and sum of all its odd digits separately.
Digits mean numbers, not the places! That is, if the given integer is "13245", even digits are 2 & 4 and odd digits are 1, 3 & 5.
Input format :
 Integer N
Output format :
Sum_of_Even_Digits Sum_of_Odd_Digits
(Print first even sum and then odd sum separated by space)
*/
#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
    cin>>n;
    int sum_of_odds=0,sum_of_evens=0;
    int digit;
    while(n>0)
    {
        digit = n%10;
        if(digit%2 == 0)
        {
            sum_of_evens = sum_of_evens + digit;
        }
        else
        {
            sum_of_odds = sum_of_odds + digit;
        }
        n = n/10;
        
    }
    cout<<sum_of_evens<<" "<<sum_of_odds;
}
