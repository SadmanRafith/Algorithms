#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int *p = new int[n];
    srand(time(0));
    for(int i=0; i<n;i++)
    {
        p[i]= rand()%10;
    }
    for(int i=0; i<n;i++)
    {
        cout<<i<< " "<<p[i]<<endl;
    }
    return 0;
}

