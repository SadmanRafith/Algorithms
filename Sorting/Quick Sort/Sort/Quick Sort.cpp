
#include<bits/stdc++.h>
using namespace std;
int Partition(int arr[],int low,int high)
{
    int pivot=arr[high];
    int k=low-1;
    for(int i=low;i<high;i++)
    {
        if(pivot>arr[i])
        {
            k++;
            swap(arr[k],arr[i]);

        }
    }
    k++;
    swap(arr[high],arr[k]);
    return k;
}
void quicksort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pivot_index = Partition(arr,low,high);

        quicksort(arr,low,pivot_index-1);
        quicksort(arr,pivot_index+1,high);
    }
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]= rand()%10;
    }
    cout<<"unsorted array"<<endl;
     print(arr,n);
     cout<<""<<endl;

    cout<<"sorted array"<<endl;
    quicksort(arr,0,n-1);
    print(arr,n);

}
