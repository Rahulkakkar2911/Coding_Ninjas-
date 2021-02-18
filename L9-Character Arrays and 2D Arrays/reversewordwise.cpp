/*
Reverse the given string word wise. That is, the last word in given string should come at 1st place, last second word at 2nd place and so on. Individual words should remain as it is.
Input format :
String in a single line
Output format :
Word wise reversed string in a single line
Constraints :
0 <= |S| <= 10^7
where |S| represents the length of string, S.
Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
Ninjas Coding to Welcome
Sample Input 2:
Always indent your code
Sample Output 2:
code your indent Always
*/
#include <iostream>
// #include "solution.h"
using namespace std;


void reverseStringWordWise(char arr[])
{
    int i,j;
    int length = 0;
    for (int i = 0; arr[i]!='\0'; i++)
    {
        length++;
    }
    i = 0;
    j = length - 1;
    while (i<j)
    {
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    int k = 0;
    i = 0;
    j = 0;
    while(arr[k]!='\0')
    {   
        while (arr[j]!=' ' && arr[j]!='\0')
        {
            j++;
        }
        k = j;
        j = j-1;
        while(i<j)
        {
            char temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
        j = k+1;
        i = j;
        
    }
}

int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
