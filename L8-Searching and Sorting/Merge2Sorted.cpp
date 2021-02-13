#include<iostream>
using namespace std;

void merge2array(int a[],int b[],int c[],int sizea,int sizeb,int sizec)
{       
        int i = 0;
        int j = 0;
        int k = 0;
        while (j<sizea && k<sizeb)
        {
            if (a[j]<b[k])
            {
                c[i] = a[j];
                j++;
                i++;
            }
            else if(a[j]>b[k])
            {
                c[i] = b[k];
                k++;
                i++;
            }
            else if(a[j] == b[k])
            {
                c[i]=b[k];
                i++;
                c[i]=a[j];
                i++;
                j++;
                k++;
            }
        }
        while (j<sizea)
        {
            c[i]=a[j];
            j++;
            i++;
        }
        while(k<sizeb)
        {
            c[i]=b[k];
            k++;
            i++;
        }
}

int main()
{
    int n,m,arr1[50],arr2[50];
    cout<<"Enter the no. of elements in 1st Array : ";
    cin>>n;
    cout<<"Enter the no. of elements in 2nd Array : ";
    cin>>m;
    const int c=n+m;
    int arr3[c];
    cout<<"Enter elements 1st array : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }
    cout<<"enter elements of 2nd Array : ";
    for (int j = 0; j < m; j++)
    {
        cin>>arr2[j];
    }
    merge2array(arr1,arr2,arr3,n,m,c);
    cout<<"Merged Array : ";
    for (int k = 0; k < c; k++)
    {
        cout<<arr3[k]<<" ";
    }
    

}