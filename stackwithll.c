#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* top = NULL;
int isEmpty() {
    return top == NULL;
}


void push(int value) {
  
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    
    if (newNode == NULL) {
        printf("Stack Overflow! Heap memory full.\n");
        return;
    }
    
    newNode->data = value;
    newNode->next = top; 
    top = newNode;       
    printf("Pushed %d into the stack\n", value);
}
void pop() {
    if (isEmpty()) {
        printf("Stack Underflow! No elements to pop.\n");
        return;
    }
    
    struct Node* temp = top; 
    printf("Popped %d from the stack\n", top->data);
    top = top->next;        
    free(temp);              
}

int main() {
    push(10);
    push(20);
    push(30);
    pop();
    pop();

    return 0;
}
