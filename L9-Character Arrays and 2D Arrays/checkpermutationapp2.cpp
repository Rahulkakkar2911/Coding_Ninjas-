/*
For a given two strings, 'str1' and 'str2', check whether they are a permutation of each other or not.
Permutations of each other
Two strings are said to be a permutation of each other when either of the string's characters can be rearranged so that it becomes identical to the other one.

Example: 
str1= "sinrtg" 
str2 = "string"

The character of the first string(str1) can be rearranged to form str2 and hence we can say that the given strings are a permutation of each other.
Input Format:
The first line of input contains a string without any leading and trailing spaces, representing the first string 'str1'.

The second line of input contains a string without any leading and trailing spaces, representing the second string 'str2'.
Note:
All the characters in the input strings would be in lower case.
Output Format:
The only line of output prints either 'true' or 'false', denoting whether the two strings are a permutation of each other or not.

You are not required to print anything. It has already been taken care of. Just implement the function. 
Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second
Sample Input 1:
abcde
baedc
Sample Output 1:
true
Sample Input 2:
abc
cbd
Sample Output 2:
false
*/
#include<iostream>
#include<cstring>
using namespace std;

bool checkpermutation(char input1[],char input2[])
{
    int length1 = strlen(input1);
    int length2 = strlen(input2);
    if (length1!=length2)
    {
        cout<<"They can't be permutated"<<endl;
        return false;   
    }
    int freq[256] = {0};
    for (int i = 0; i < length1; i++)
    {   
        freq[int(input1[i])] = freq[int(input1[i])] + 1;            
    }
    for (int j = 0; j < length2; j++)
    {
        freq[int(input2[j])] = freq[int(input2[j])] - 1;
    }
    for (int k = 0; k < 256; k++)
    {
        if (freq[k]!=0)
        {
            return false;
        }
        
    }
    return true;
    
    
}
//complexity is O(n)
int main()
{
    char a[100],b[100];
    cout<<"Enter String 1 from which to check : ";
    cin>>a;
    cout<<"Enter String 2 which to check : ";
    cin>>b;
    
    if (checkpermutation(a,b))
    {
        cout<<"Yes! they are permutated string.";
    }
    else
    {
        cout<<"They are not permutated string";
    }
}