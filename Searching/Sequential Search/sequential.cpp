/*  
    Sequential Search ---->
    Time complexity: O(N)
    Auxiliary Space: O(1)
*/


#include<iostream>
using namespace std;


int sequentialSearch(int arr[], int size, int x){
    for(int i=0; i<size; i++){
        if(arr[i] == x){
            return i;
        }
    }
    return -1;
}


int main()
{
    cout << "\n";
    int arr[] = {1,8,9,52,64,7,25,36,94,12};
    int size = sizeof(arr)/sizeof(int);

    cout << "Showing the array: ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";

    int x = 64;
    cout << "Searching element: " << x << "\n";


    int result = sequentialSearch(arr, size, x);
    
    //ternary operator usage
    (result == -1)
    ? cout << "The element is not present in the array!" << "\n"
    : cout << "The element is present at index no: " << result << "\n";

    cout << "\n";
    return 0;
}
