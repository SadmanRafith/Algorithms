#include<bits/stdc++.h>
using namespace std;

/*
     creating a file with having random numbers and writing it in that file
*/
int main()
{
    ofstream fout("50.txt");       // ofstream s used to create files and to write data to files that has been generated
    srand(time(0));
    int n=100;
    for(int i=0; i<n;i++)
    {
        fout<<rand()%100+1<<endl;
    }
    return 0;
}
