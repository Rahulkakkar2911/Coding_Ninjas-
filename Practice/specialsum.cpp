/*
Special Sum of array
Level EASY
Given an array of length N, which contains single digit elements at every index. You need to find and return the sum of all elements of the array. But the final sum should also be single digit.
In order to keep the output single digit - you need to keep adding the output number digits till single digit is left.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Output Format :
Single digit sum
Constraints :
1 <= N <= 10^6
Sample Input 1 :
3
9 9 9
Sample Output 1 :
9
*/
#include<iostream>
using namespace std;

int sum_of_digits(int sum)
{
    int sumofdigits = 0;
        while(sum>0)
    	{
        	int digit = sum%10;
        	sumofdigits = sumofdigits + digit;
        	sum = sum/10;
        }
    return sumofdigits;
}
int sum(int *arr,int size)
{
	//Write code here
    int sum = 0,digit=0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    int sum2 = sum;
    while(sum2>10)
  	{
        sum2 = sum_of_digits(sum2);
    }
	return sum2;   
}

int main()
{
    int n;
    cin>>n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int sp_sum_of_array = sum(arr, n);
    cout<<sp_sum_of_array;
}