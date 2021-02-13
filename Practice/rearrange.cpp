/*
Rearrange a given array (that contains equal number of positive & negative numbers) such that +ve and -ve are arranged alternatively. Respective order should be maintained.
Make changes in same array and no returning or printing in needed.
Input Format :
Line 1 : N, size of array
Line 2 : N elements of array
Output Format :
N numbers of output according to above description
Constraints :
1 <= N <= 10^6
Sample Input :
6
1 2 3 -1 -2 -3
Sample Output :
1 -1 2 -2 3 -3 
*/
#include<iostream>
#include<cmath>
using namespace std;

void rearrange(int b[], int size)
{   
    int j,val = 1;
    for (int i = 1; i < size && val<=(size/2)-1; i+=2)
    {   
        int currentpos = (size)/2 + val - 1;
        int currentele = b[currentpos];
        cout<<"current pos : "<<currentpos<<" current value : "<<currentele<<endl;
        j = currentpos;
        while(j>i)
        {   
            b[j] = b[j-1];
            j--;
        }
        b[j] = currentele;
        val++;
    }
    
}

int main()
{
    int n,arr[100];
    cout<<"Enter the No. Of Elements : ";
    cin>>n;

    cout<<"Enter Elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    rearrange(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}