#include <stdio.h>
#include <stdlib.h>

#define size 5

int stack[size];
int top = -1;
int isFull() {
    if (top == size- 1) {
        return 1;
    } else {
        return 0;
    }
}
int isEmpty() {
    if (top == -1) {
        return 1;
    } else {
        return 0;
    }
}
void push(int value) {
    if (isFull()) {
        printf("Stack Overflow  %d\n", value);
    } else {
        top = top +1;
        stack[top] = value;
        printf("Pushed %d into the stack\n", value);
    }
}

void pop() {
    if (isEmpty()) {
        printf("Stack Underflow No elements to pop\n");
    } else {
        printf("Popped %d from the stack\n", stack[top]);
        top = top -1;
    }
}
int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    pop();
    pop();
    push(15);
    pop();
    pop();
    pop();

    return 0;
}
