/*
for n = 4
A
BB
CCC
DDDD
*/

#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;
	char ch = 'A';
    int i = 1;
    while(i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<ch;
            j++;
        }
        cout<<endl;
        ch++;
        i++;
    }
}
