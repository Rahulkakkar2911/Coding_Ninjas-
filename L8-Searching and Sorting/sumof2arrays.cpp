/*
Two random integer arrays/lists have been given as ARR1 and ARR2 of size N and M respectively. Both the arrays/lists contain numbers from 0 to 9(i.e. single digit integer is present at every index). The idea here is to represent each array/list as an integer in itself of digits N and M.
You need to find the sum of both the input arrays/list treating them as two integers and put the result in another array/list i.e. output array/list will also contain only single digit at every index.
Note:
The sizes N and M can be different. 

Output array/list(of all 0s) has been provided as a function argument. Its size will always be one more than the size of the bigger array/list. Place 0 at the 0th index if there is no carry. 

No need to print the elements of the output array/list.
Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the size of the first array/list.

Second line contains 'N' single space separated integers representing the elements of the first array/list.

Third line contains an integer 'M' representing the size of the second array/list.

Fourth line contains 'M' single space separated integers representing the elements of the second array/list.
Output Format :
For each test case, print the required sum of the arrays/list in a row, separated by a single space.

Output for every test case will be printed in a separate line.
Constraints :
1 <= t <= 10^2
0 <= N <= 10^5
0 <= M <= 10^5
Time Limit: 1 sec 
Sample Input 1:
1
3
6 2 4
3
7 5 6
Sample Output 1:
1 3 8 0
Sample Input 2:
2
3
8 5 2
2
1 3
4
9 7 6 1
3
4 5 9
Sample Output 2:
0 8 6 5
1 0 2 2 0 
*/
#include<iostream>
using namespace std;

void arraySum(int num1[],int num2[],int num1size,int num2size)
{
    int maxsize = num1size>num2size?num1size:num2size;
    int sumres[maxsize+1] = {0};
    
    int i,j,k;
    int carry = 0;
    i = maxsize;
    j = num1size-1;
    k = num2size-1;
    int sum = 0;
    while(j>=0 && k>=0)
    {   
        sum = num1[j] + num2[k] + carry;
        sumres[i] = sum % 10;
        carry = sum / 10;
        i--;
        j--;
        k--;
    }
    while (k>=0)
    {   
        sum = num2[k] + carry;
        sumres[i] = sum%10;
        carry = sum/10;
        i--;
        k--;
    }
    while (j>=0)
    {   
        sum = num1[j] + carry;
        sumres[i] = sum%10;
        carry = sum/10;
        i--;
        j--;
    }
    if(carry!=0)
    {
        sumres[i] = carry;
        i--;
    }
    for (int i = 0; i < maxsize + 1; i++)
    {
        cout<<sumres[i]<<" ";
    }
    
    

}

int main()
{
    int num1[100],num2[100];
    int num1size,num2size;
    cout<<"Enter, How many numbers are there in Num1: ";
    cin>>num1size;
    cout<<"Enter, How many numbers are there in Num2: ";
    cin>>num2size;
    cout<<"Enter number 1 : ";
    for (int i = 0; i < num1size; i++)
    {
        cin>>num1[i];
    }
    cout<<"Enter number 2 : ";
    for (int i = 0; i < num2size; i++)
    {
        cin>>num2[i];
    }
    arraySum(num1,num2,num1size,num2size);
}