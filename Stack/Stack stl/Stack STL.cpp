/*
----->using static array
-------> push/pop/isEmpty/isFull
*/

#include<bits/stdc++.h>
#include<stack>
using namespace std;


int main(){
    stack<string> s();
    s.push("Richard");
    s.push("Aaron");
    s.push("Florence");
    s.push("Jonathan");
    s.display();
    cout<<s.top()<<endl;

return 0;
}

