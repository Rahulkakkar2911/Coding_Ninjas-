/*
for n = 4
D
CD
BCD
ABCD
*/

#include<iostream>
using namespace std;


int main() {
    
    int n;
    cin>>n;
    int i = 1;
    while(i<=n)
    {	char ch = 'A' - i + n;
        int j=1;
        while (j<=i)
        {
            cout<<ch;
            j++;
            ch++;
        }
        cout<<endl;
        i++;
    }
}
