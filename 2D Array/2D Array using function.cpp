#include<bits/stdc++.h>
using namespace std;

int **matrix(int r, int c)
{
    int **m = new int*[r];  // double pointer are usually used for matrixes
    for(int i = 0; i<r; i++)
    {
      m[i] = new int[c];
    }
    return m;
}

void inputdata(int **s, int r, int c)
{
    srand(time(0));
    for(int i= 0; i<r;i++)     // assigning value in matrix
    {
     for(int j=0;j<c;j++)
     {
         s[i][j]=rand()%10;
     }
    }
}

void printmatrix(int **b, int r, int c)
{
    for(int i=0;i<r;i++)    //output
    {
        for(int j=0; j<c; j++)
        {
            cout<<b[i][j]<< " ";
        }
        cout<<endl;
    }
}
int main()
{
    int row;
    int column;
    cin>>row>>column;

    int **p = matrix(row, column);
    inputdata(p,row,column);
    printmatrix(p,row,column);



    return 0;
    }





