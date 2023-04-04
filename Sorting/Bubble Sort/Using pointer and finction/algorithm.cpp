/*
This a c++ program where it genraates random number using rand func(_) and prints the data and generates the number using bubble sort algorithm
*/

#include<bits/stdc++.h>
using namespace std;

 void bubbleSort(int *a, int n)
{
    for(int k=0; k<n; k++)
    {
    for(int i=0; i<n-1; i++)
    {
        if(a[i]>a[i+1]) swap(a[i],a[i+1]);
    }
    }
}
void printList(int *p, int n)
{
     for(int i=0; i<n;i++)
    {
        cout<<i<< " "<<p[i]<<endl;
    }

}
void generatedata(int *p, int n)
{
    for(int i=0; i<n;i++)
    {
        p[i]= rand()%10;
    }

}

int main()
{
    int n;
    cin>>n;
    int *p = new int[n];

    generatedata(p,n);
    printList(p,n);
    bubbleSort(p,n);
    cout<< "...................."<<endl;
    printList(p,n);
    return 0;
}


