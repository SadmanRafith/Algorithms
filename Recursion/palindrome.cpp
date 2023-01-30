// checking wether a string is palindrome or not

#include<iostream>
#include<string.h>
using namespace std;

int recursive_palindrome(string str, int start, int end){
    if(start >= end){
        return 1;
    }
    if(str[start] != str[end]){
        return 0;
    }
    return recursive_palindrome(str, start+1, end-1);
}


int main()
{
    cout << "\n";
    string str;
    cout << "Enter the string: ";
    cin >> str;

    int n = str.size()-1;
    cout << "Answer: " << recursive_palindrome(str, 0, n);


    cout << "\n";
    return 0;
}