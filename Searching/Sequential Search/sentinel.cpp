/*
    Sentinel Linear Search as the name suggests is a type of Linear Search where the number 
    of comparisons is reduced as compared to a traditional linear search. When a linear search 
    is performed on an array of size N then in the worst case a total of N comparisons are made 
    when the element to be searched is compared to all the elements of the array and (2N + 1) 
    comparisons are made for the index of the element to be compared so that the index is not 
    out of bounds of the array which can be reduced in a Sentinel Linear Search.
    In this search, the last element of the array is replaced with the element to be searched 
    and then the linear search is performed on the array without checking whether the current 
    index is inside the index range of the array or not because the element to be searched will 
    definitely be found inside the array even if it was not present in the original array since 
    the last element got replaced with it. So, the index to be checked will never be out of the 
    bounds of the array. The number of comparisons in the worst case there will be (N + 2).


    In linear search 1. n comp
                     2. n + 1 comp (when condition breaks) issue: Array index out of bounds

                     Therefore total comp = 2n + 1  which is -> O(2n)
    
    In sentinel search 1. n comp
                       2. 1 comp (for the if condition part)

                       Therefore total comp = n + 2  which is -> O(n)
*/

#include<iostream>
using namespace std;

void sentinelSearch(int arr[], int size, int key){

    // replacing the last element of the array with the key
    int last = arr[size-1];
    arr[size-1] = key;

    // tracking index
    int i = 0;

    while(arr[i] != key){
        i++;
    }

    // making the last element what it was initially
    arr[size-1] = last;

    // verifying
    if((i<size-1) || (arr[size-1] == key)){
        cout << key << " is presesnt at index no: " << i << "\n";
    }
    else{
        cout << "Element is not found!" << "\n";
    }

}

int main()
{
    cout << "\n";
    int arr[] = {10, 20, 180, 30, 60, 50, 110, 100, 70};
    int size = sizeof(arr)/sizeof(int);

    cout << "Showing the array: ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";

    int key = 180;
    cout << "Searching the element: " << key << "\n";

    sentinelSearch(arr, size, key);

    cout << "\n";
    return 0;
}