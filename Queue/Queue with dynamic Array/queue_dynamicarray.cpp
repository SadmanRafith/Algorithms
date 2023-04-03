#include <iostream>
using namespace std;

int* arr;
int front = -1, rear = -1;
int size;

bool isEmpty() {
    return (front == -1);
}

bool isFull() {
    return (rear == size - 1);
}

void enqueue(int x) {
    cout << "Enqueuing " << x << endl;
    if (isFull()) {
        cout << "Error: Queue is full" << endl;
        return;
    }
    if (isEmpty()) {
        front = 0;
    }
    rear++;
    arr[rear] = x;
}

void dequeue() {
    if (isEmpty()) {
        cout << "Error: Queue is empty" << endl;
        return;
    }
    cout << "Dequeuing " << arr[front] << endl;
    if (front == rear) {
        front = -1;
        rear = -1;
    }
    else {
        front++;
    }
}

int main() {
    size = 3;
    arr = new int[size];
    enqueue(1);
    enqueue(2);
    enqueue(3);
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    delete[] arr;
    return 0;
}
