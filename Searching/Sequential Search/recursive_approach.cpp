#include <iostream>
using namespace std;
 
int linearsearch(int arr[], int size, int key)
{
    // base condition
    if(size == 0){
        return -1;
    }
    else if(arr[size-1] == key){
        // Return the index of found key.
        return size - 1;
    }
    else{
        int ans = linearsearch(arr, size-1, key);
        return ans;
    }
}
 

int main()
{
    cout << "\n";
    int arr[5] = {5, 15, 6, 9, 4};
    int size = sizeof(arr)/sizeof(int);

    cout << "The given array: ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";

    int key = 4;
    cout << "The searching element: " << key << "\n";
    
    int ans = linearsearch(arr, 5, key);
    if(ans == -1){
        cout << "The element " << key << " is not found." << "\n";
    }
    else{
        cout << "The element " << key << " is found at index no: " << ans << "\n";
    }

    cout << "\n";
    return 0;
}