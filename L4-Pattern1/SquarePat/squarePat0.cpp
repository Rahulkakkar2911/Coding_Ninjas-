/*
for n = 4
******
*    *
*    *
******
*/


#include<iostream>
using namespace std;

int main()
{
    int i = 1;
    int n;
    cin>>n;

    while(i<=n)
    {
        cout<<"*";
        int j = 1;
        while(j<=n)
        {
            if(i==1 || i==n)
            {
                cout<<"*";
                j++;
            }
            else
            {
                cout<<" ";
                j++;
            }
        }
        cout<<"*"<<endl;
        i++;
    }
}