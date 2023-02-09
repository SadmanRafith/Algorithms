#include<bits/stdc++.h>
using namespace std;
/*
  retrieving the data from the file that has been created and printing it
*/
void PrintList(int *p, int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<endl;
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
    cout<< "......................"<<endl;

    return 0;
}
