#include <iostream>
using namespace std;

#define size 100
int arr[size];
int rear = -1;

void enqueue(int value) {
    if (rear >= size) {
        cout << "Queqe overflow.\n";
        return ;
    } else {
        rear++;
        arr[rear] = value;
    }
}

void display() {
    cout << "display for the queqe" << endl;
    if (rear == -1) {
        cout << "Quequ is empty. \n";
    } else {
        for (int i=0; i<=rear; i++) {
            cout << arr[i] << endl;
        }
    }
}

void dequeue() {
    for (int i=0; i<=rear; i++) {
        int temp = arr[i+1];
        arr[i+1]=temp;
    }
    rear--;
}

int main() {
    //enqueue->add an element 
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();
    dequeue();
    dequeue();
    display();
    return 0;
}