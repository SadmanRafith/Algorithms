#include<bits/stdc++.h>
using namespace std;

/*
  retrieving the data from the file and sorting the data using
  Selection sort sort algorithm and creating a new file to write the sorted data
*/

void PrintList(int *p, int n)   // printing the random values
{
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<endl;
    }
}

void selectionsort(int *p, int n)  //algorithm for selection sort
 {
     for(int i=0; i<n-1; i++)
     {
         int imin=i;
         int minval=p[i];
         for(int j=i+1; j<n; j++)
         {
             if(p[j]<minval)
             {
                 minval=p[i];
                 imin=j;
             }
             p[imin]=p[i];
             p[i]=minval;
         }
     }
 }

 void SortData(int *p, int n)        // generating a new file to write the sorted data in the new file
{
    ofstream kout("Selection Sort.txt");
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

    ifstream fin("50.txt");      //Ifstream  is a file input stream that allows us to read any information contained in the file.

    for(int i=0;i<n;i++)
    {
        fin>>a[i];
    }
    PrintList(a,n);
    selectionsort(a,n);
    cout<< "......................"<<endl;
    SortData(a,n);
    return 0;
}


