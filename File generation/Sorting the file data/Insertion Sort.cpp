#include<bits/stdc++.h>
using namespace std;

/*
  retrieving the data from the file and sorting the data using
  Insertion sort sort algorithm and creating a new file to write the sorted data
*/

void PrintList(int *p, int n) // printing the random values
{
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<endl;
    }
}
void Insertionsort(int *p, int n) //Algorithm for insertion sort
{
    for(int j=1; j<n; j++)
    {
        int value = p[j];
        int i=j-1;
        while(i>0 && p[i]>value)
        {
            swap(p[i], p[i+1]);
            i=i-1;
        }
        p[i] = value;
    }
}

void SortData(int *p, int n)       // generating a new file to write the sorted data in the new file
{
    ofstream kout("Insertion Sort.txt");
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

    ifstream fin("50.txt");        //Ifstream  is a file input stream that allows us to read any information contained in the file.

    for(int i=0;i<n;i++)
    {
        fin>>a[i];
    }
    PrintList(a,n);
    Insertionsort(a,n);
    cout<< "......................"<<endl;
    SortData(a,n);
    return 0;
}
