#include<iostream>
using namespace std;

void pushZeroesToEnd(int b[],int size)
{ 
    int i,pos;
    pos = size - 1;
    int start = 0;
    
    i = 0;
    while (i<=pos)
    {   
        
        /* code */
        int j;
        if (b[i]==0)
        {
            j=i;
            while(j<pos)
            {   
                b[j] = b[j+1];
                j++;
            }
            i=0;
            b[pos] = 0;
            pos--;
        }
        else{
            i++;
        }
        
        
    }
        
}
    

int main()
{
    int n,arr[100];
    cout<<"Enter the no. of Elements : ";
    cin>>n;
    cout<<"Enter Elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    pushZeroesToEnd(arr,n);
    for (int j = 0; j < n; j++)
    {
        cout<<arr[j]<<" ";
    }
    
}