/*
for n = 3
3 3 3 3 3
3 2 2 2 3
3 2 1 2 3
3 2 2 2 3
3 3 3 3 3
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    //1st half
    int i = 1;
    while(i<=n)
    {
        int j = 1;
        while(j<=n)
        {
            int min = i < j ? i : j;
            cout<<n-min+1<<" ";
            j++;
        }
        
        int k = n-1;
        while(k>=1)
        {
            int min = i<k ? i:k;
            cout<<n-min+1<<" ";
            k--;
        }
        cout<<endl;
        i++;
    }
    //2nd half
    int z=n-1;
    while(z>=1)
    {
        int x = 1;
        while(x<=n)
        {
            int min = z<x? z:x;
            cout<<n-min+1<<" ";
            x++;
        }
        int t = n-1;
        while(t>=1)
        {
            int min = z < t ? z : t ;
            cout<<n-min+1<<" ";
            t--;
        }


        z--;
        cout<<endl;
    }
}

