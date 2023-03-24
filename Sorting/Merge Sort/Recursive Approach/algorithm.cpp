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
void mergelist(int *A, int l, int m,int r)
{
    int n1 = m-l+1;
    int n2 = r - m;

    int *L = new int[n1];
    int *R = new int[n2];

    for(int i=0; i<n1; i++)
    {
        L[i] = A[l+i];
    }

     for(int i=0; i<n2; i++)
    {
        R[i] = A[m+1+i];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]>R[j]) A[k++] = R[j++];
        else A[k++]= L[i++];
    }
    while(i<n1)
    {
        A[k++] = L[i++];
    }

    while(j<n2)
    {
        A[k++] = R[j++];
    }
}


 void mergesort(int *A, int left, int right)
{
    int mid;
    if(left<right)
    {
        mid = (left+right)/2;
        mergesort(A,left,mid);
       mergesort(A,mid+1,right);
       mergelist(A,left,mid,right);

    }
}

int BinarySearchRecursive(int *A, int low, int high, int x)
{
    int mid;
    if(low>high) return -1;
    mid= (low+high)/2;
    if(x==A[mid]) return mid;
    else if(x<A[mid]) return BinarySearchRecursive(A,low,mid-1,x);
        else return BinarySearchRecursive(A, mid+1,high,x);
}

int main()
{
    srand(time(0));
    int n=10000;
    int *a = new int[n];
    for(int i=0; i<n; i++)
    {
        a[i]=rand()%1000+1;
    }

    mergesort(a,0,1000-1);
    printlist(a,1000);
    int x = BinarySearchRecursive(a,0,1000-1,605);
    if(x!=-1)
        cout<< "item found in "<<x<<endl;
    else
        cout<< "item not found";


return 0;
}

