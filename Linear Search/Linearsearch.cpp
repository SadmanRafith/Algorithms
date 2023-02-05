#include<bits/stdc++.h>
using namespace std;

int linearsearch(int *a, int n, int item)
{
    for(int i=0; i<n; i++)
    {
        if(a[i]== item) return i;
    }
    return -1;
}
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

   int index = linearsearch(p,n,100);
   if(index==-1) cout<< "not found"<<endl;
   else cout<< "Found"<< endl;
    return 0;
}


