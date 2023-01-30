#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10
int stack[MAX_SIZE], top = -1;
void push(int value) {
    if (top == MAX_SIZE - 1) {
        printf("Stack overflow\n");
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed to stack\n", value);
    }
}
void pop() {
    if (top == -1) {
        printf("Stack underflow\n");
    } else {
        printf("%d popped from stack\n", stack[top]);
        top--;
    }
}
void peek() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Top element is %d\n", stack[top]);
    }
}
int main() {
    push(1);
    push(2);
    push(3);
    peek();
    pop();
    peek();
      return 0
              
