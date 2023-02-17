#include<iostream>
using namespace std;


int main()
{
    int arr[] = {11,3,6,8,15,1};
    int size = sizeof(arr)/sizeof(int);
    int i, j, k;
    int temp;

    cout << "\nUnsorted array: ";
    for(i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    // algorithm
    for(i=0; i<size-1; i++){
        for(j=0; j<size-1-i; j++){
            if(arr[j] > arr[j+1]){               
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << "\nSorted array: ";
    for(i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}