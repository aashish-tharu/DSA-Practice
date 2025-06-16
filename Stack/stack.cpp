#include <iostream>
#define size 100
int arr[size];
int top=-1;

void push(int value) {
    top++;
    arr[top] = value;
}

void display() {
    if (top == -1) {
        std::cout << "the stack is empty\n";
    } else {
        for (int i = 0; i <= top; i++) {
            std::cout << arr[i] << std::endl;
        }
    }
}

void peak() {
    std::cout << arr[top] << std::endl;
}

void pop() {
    top--;
}

int main() {
    push(25);
    push(30);
    push(35);
    display();
    peak();
    pop();
    display();
    return 0;
}