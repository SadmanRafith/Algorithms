#include<iostream>
using namespace std;

int intervalSearch(int arr[], int low, int high, int element){
    int mid;
    if(low > high){
        return -1;
    }

    mid = (low + high)/2;

    if(arr[mid] == element){
        return 1;
    }
    else if(arr[mid] < element){
        low = mid + 1;
        intervalSearch(arr, low, high, element);
    }
    else{
        high = mid - 1;
        intervalSearch(arr, low, high, element);
    }
}

int main()
{
    cout << "\n";

    // must be a sorted array
    int arr[] = {1,3,5,56,64,73,123,225,444};             
    int size = sizeof(arr)/sizeof(int);

    int low = 0;
    int high = size-1;

    // searching element
    int element = 64;

    int result = intervalSearch(arr, low, high, element);

    (result == 1)
    ? cout << "Element was found!" << "\n"
    : cout << "Element was not found!";

    cout << "\n";
    return 0;
}