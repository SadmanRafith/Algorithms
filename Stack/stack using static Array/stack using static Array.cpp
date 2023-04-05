/*
----->using static array
-------> push/pop/isEmpty/isFull
*/

#include<bits/stdc++.h>
using namespace std;

# define n 3

int a[n];
int top=-1;

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

int main(){

    push(10);
    push(20);
    push(30);
    push(40);
    display();
    pop();
    pop();
    pop();
    pop();

return 0;
}
