#include <iostream>
using namespace std;

template <typename T>

class Queue {
private:
    T* arr;
    int front, rear, size;
public:
    Queue(int n) {
        size = n;
        arr = new T[size];
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return (front == -1);
    }

    bool isFull() {
        return (rear == size - 1);
    }

    void enqueue(T x) {
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

    ~Queue() {
        delete[] arr;
    }
};

int main() {
    Queue<int> q(3);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    return 0;
}

