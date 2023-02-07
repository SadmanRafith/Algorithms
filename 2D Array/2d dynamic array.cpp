#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    int column;
    cin>>row>>column;

    int **m = new int*[row];  // double pointer are usually used for matrixes
    for(int i = 0; i<row; i++)
    {
      m[i] = new int[column];
    }
    for(int i= 0; i<row;i++)     // assigning value in matrix
    {
     for(int j=0;j<column;j++)
     {
         m[i][j]=10;
     }
    }
    for(int i=0;i<row;i++)    //output
    {
        for(int j=0; j<column; j++)
        {
            cout<<m[i][j]<< " ";
        }
        cout<<endl;
    }
    return 0;
    }




