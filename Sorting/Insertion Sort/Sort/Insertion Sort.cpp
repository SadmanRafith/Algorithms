#include<bits/stdc++.h>
using namespace std;

void printlist(int*p,int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<p[i]<< endl;
    }
    cout<<endl;
}

void insertionsort(int *A, int n)
{
    for(int j=1; j<n; j++)
    {
        int value= A[j];
        int i=j-1;
        while(i>=0 && A[i]>value)
        {
            //A[i + 1] = A[i];
            swap(A[i], A[i+1]);
            i=i-1;
        }
        A[i+1]=value;
    }
}



int main()
{
    srand(time(0));
    int n= 100000;
    int *a = new int[n];
    for(int i=0; i<n; i++)
    {
        a[i]=rand()%1000+1;
    }
    //int a[]= {10,4,8,1,15,0};
    printlist(a,n);
    insertionsort(a,n);
    cout<< "...................."<<endl;
    printlist(a,n);
}
