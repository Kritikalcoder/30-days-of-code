#include<bits/stdc++.h>
using namespace std;

class StackNode {
    public:
    int data;
    StackNode* next;
};

StackNode* newNode(int data) {
    StackNode* sn = new StackNode();
    sn->data = data;
    sn->next = NULL;
    return sn;
}

bool isEmpty(StackNode* root) {
    return !root;
}

void push(StackNode** root, int data) {
    StackNode* sn = newNode(data);
    sn->next = *root;
    *root = sn;
    cout << data << " pushed to stack\n";
}

int pop(StackNode** root) {
    if (isEmpty(*root)) {
        return INT_MIN;
    }
    StackNode *temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);

    return popped;
}

int peek(StackNode** root) {
    if (isEmpty(root)) {
        return INT_MIN;
    }
    return root->data;
}

int main() {
    StackNode* s = NULL;
    push(&s,1);
    push(&s,3);
    push(&s,5);
    cout << pop(&s) << " popped from stack\n"; 
    cout << "Top element is " << peek(s) << endl; 
    return 0; 
}