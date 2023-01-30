// recursion is a process where a function calls itself
// sum numbers between m-n
// return m + recursive_sum(m+1, n); -> 2 + recursive_sum(3, 4)
// return m -> base case, otherwise the program will run infinitely

#include<iostream>
using namespace std;

int recursive_sum(int m, int n){
    if(m == n){
        return m;
    }
    return m + recursive_sum(m+1, n);
}

int main()
{
    cout << "\n";
    int m = 2;
    int n = 4;
    int sum = 0;

    cout << "Sum: " << recursive_sum(m,n);

    cout << "\n";
    return 0;
}
