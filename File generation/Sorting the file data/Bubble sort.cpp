#include<bits/stdc++.h>
using namespace std;
/*
  retrieving the data from the file and sorting the data using
  bubble sort algorithm and creating a new file to write the sorted data
*/
void PrintList(int *p, int n)   // printing the random generated values
{
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<endl;
    }
}
void bubblesort(int *p,int n)   // Algorithm for bubble sort
{
   for(int k=0; k<n-1;k++)
   {
        for(int i=0;i<n-2;i++)
    {
        if(p[i]>p[i+1]) swap(p[i],p[i+1]);
    }
   }
}

void SortData(int *p, int n)   // generating a new file to write the sorted data in the new file
{
    ofstream kout(" Bubble sort.txt");
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<endl;
        kout<<p[i]<<endl;
    }
}

int main()
{
    int n=100;
    int *a= new int[n];

    ifstream fin("50.txt");    //Ifstream  is a file input stream that allows us to read any information contained in the file.

    for(int i=0;i<n;i++)
    {
        fin>>a[i];
    }
    PrintList(a,n);
    bubblesort(a,n);
    cout<< "......................"<<endl;
   SortData(a,n);


    return 0;
}
