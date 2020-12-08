#include<bits/stdc++.h>
using namespace std;

#define MAX 1000

class Stack {
    int top;

    public:
    int a[MAX];

    Stack() { top = -1; }
    bool push(int x);
    int pop();
    int peek();

    bool isEmpty();

};

bool Stack::push(int x) {
    if (top >= MAX - 1) {
        cout << "Stack Overflow\n";
        return false;
    }
    else {
        top += 1;
        a[top] = x;
        cout << x << " added to top of stack\n";
        return true;
    }
}

int Stack::pop() {
    if (top < 0) {
        cout << "Stack underflow\n";
        return 0;
    }
    else {
        top -= 1;
        return a[top + 1];
    }
}

int Stack::peek() {
    if (top < 0) {
        cout << "Stack is empty\n";
        return 0;
    }
    else {
        int x = a[top];
        return x;
    }
}

bool Stack::isEmpty() {
    return (top < 0);
}

int main() {
    class Stack s;
    s.push(1);
    s.push(3);
    s.push(5);
    s.push(7);
    cout << s.pop() << "Popped from stack\n";
    return 0; 
}