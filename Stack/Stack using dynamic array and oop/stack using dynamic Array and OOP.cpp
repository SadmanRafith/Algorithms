/*
----->using static array
-------> push/pop/isEmpty/isFull
*/


#include<bits/stdc++.h>
using namespace std;

class Stack{
private:
    int n;
    int top;
    int *a;
public:

Stack(){
    n=3;
    top=-1;
    a=new int[n];
}

Stack(int n){
    this->n=n;
    top=-1;
    a=new int[n];
}

int isEmpty(){
    return top==-1?1:0;
}
int isFull(){
    return top>=n-1?1:0;
}

void push(int value){
    if(!isFull()) a[++top]=value;
    else cout<<"Full"<<endl;
}
void pop(){
    if(!isEmpty()) top--;
    else cout<<"Empty"<<endl;
}

int peak(){
    return a[top];
}

void display(){
    for(int i=0;i<=top;i++){
        cout<<a[i]<<" ";
    }

}

};


int main(){
   Stack s(6);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.display();

return 0;
}
