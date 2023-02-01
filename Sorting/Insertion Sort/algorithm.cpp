#include<iostream>
using namespace std;

int main()
{   
    cout << "\n";

    int arr[] = {12,54,65,7,23,9};
    int size = sizeof(arr)/sizeof(int);

    int key;
    int i;
    int j;

    cout << "\n";
    cout << "Original array: ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";



    // algorithm
    for(int i=2; i<=size; i++){
        key = arr[i];
        j = i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }


    cout << "Insertion sort: ";
    for(i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    cout << "\n";
    return 0;
}