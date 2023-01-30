#include<iostream>
using namespace std;

int recursive_factorial(int num){
    if(num == 1){
        return num;
    }
    return num * recursive_factorial(num - 1);
}

int main()
{
    cout << "\n";
    int num;

    cout << "Enter the number: ";
    cin >> num;

    cout << "The factorial of number " << num << " is: " << recursive_factorial(num);

    cout << "\n";
    return 0;
}