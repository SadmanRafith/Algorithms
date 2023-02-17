#include<bits/stdc++.h>
using namespace std;

 void selectionsort(int *a, int n)
 {
     for(int i=0; i<n; i++)
     {
         int imin=i;
         for(int j=i+1; j<n; j++)
         {
             if(a[j]<a[imin])
             {
                 imin=j;
             }
             swap(a[imin],a[i]);
         }
     }
 }
void printList(int *p, int n)
{
     for(int i=0; i<n;i++)
    {
        cout<<i<< " "<<p[i]<<endl;
    }

}
void generatedata(int *p, int n)
{
    srand(time(0));
    for(int i=0; i<n;i++)
    {
        p[i]= rand()%10;
    }

}

int main()
{
    int n;
    cin>>n;
    int *p = new int[n];

    generatedata(p,n);
    printList(p,n);
    selectionsort(p,n);
    cout<< "...................."<<endl;
    printList(p,n);
    return 0;
}


