/*
1
23
345
4567
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int i = 1;
    while(i<=n)
    {   int val = i;
        int j=1;
        while (j<=i)
        {
            cout<<val;
            j++;
            val++;
        }
        cout<<endl;
        i++;
    }
}