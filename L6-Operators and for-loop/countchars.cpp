/*
Write a program to count and print the total number of characters (lowercase english alphabets only), digits (0 to 9) and white spaces (single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.
That is, input will be a stream of characters and you need to consider all the characters which are entered till '$'.
Print count of characters, count of digits and count of white spaces respectively (separated by space).
*/
#include<iostream>
using namespace std;

int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
    int countOfAlpha = 0,countOfDigits = 0, countOfSpaces = 0;
    char c;
    while( c!='$')
    {
        c = cin.get();
        if(c >= 'a' && c <= 'z' )
        {
            countOfAlpha++;
        }
        else if(c >= '0' && c <= '9')
        {
            countOfDigits++;
        }
        else if(c == '\n' || c == '\t' || c == ' ')
        {
            countOfSpaces++;
        }
    }
    cout<<countOfAlpha<<" "<<countOfDigits<<" "<<countOfSpaces;
}