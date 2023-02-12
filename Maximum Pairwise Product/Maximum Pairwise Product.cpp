#include<bits/stdc++.h>
using namespace std;

int MAXPAIRWISEPRODUCT(int *a, int n)
{
    int product=0;
    for(int i=1; i<n; i++)
    {
        for(int j=1; j<n; j++)
        {
            if(i!=j)
            {
                if(product<a[i]*a[j])
                {
                    product=a[i]*a[j];
                }
            }
        }
    }
    return product;
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
    MAXPAIRWISEPRODUCT(p,n);
    cout<< "...................."<<endl;
    //printList(p,n);
    return 0;
}




