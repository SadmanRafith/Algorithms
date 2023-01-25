#include<iostream>
using namespace std;

int *f(int *x, int n)
{
    int *b = new int [n];
    for(int i=0; i<n; i++)
    {
        b[i]=2*x[i];
    }
    return b;
}

int main()
{
    int a[]= {10,20,30,40};

    int *p = f(a,4);
    for(int i=0; i<4;i++)
    {
        cout<<p[i]<< " ";
    }
}
