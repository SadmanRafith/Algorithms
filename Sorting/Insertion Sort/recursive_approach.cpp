/*
    insertionSortRecursive function will get called 4 times for this array
    all the process will be occur in reverse way
*/

#include<iostream>
using namespace std;

void insertionSortRecursive(int arr[], int n)
{
    // Base case
    if(n <= 1){
        return;
    }
  
    // the process
    insertionSortRecursive(arr, n-1);
  
    int pivot = arr[n-1];
    int j = n-2;
  
    while(j>=0 && arr[j]>pivot){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = pivot;
}
  

void printArray(int arr[], int n){
    for(int i=0; i < n; i++){
        cout << arr[i] << " ";
    }
}
  

int main()
{
    cout << "\n";
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr)/sizeof(int);
  
    cout << "Printing the original array: ";
    printArray(arr, n);

    insertionSortRecursive(arr, n);
    cout << "\n";

    cout << "Printing the sorted array: ";
    printArray(arr, n);
  
    cout << "\n";
    return 0;
}