// Write a program in ‘C’ to display the reverse of a string using a stack

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
struct Stack {
    char arr[MAX];
    int top;
};
void initStack(struct Stack *stack) {
    stack->top = -1;
}
int isFull(struct Stack *stack) {
    return stack->top == MAX - 1;
}
int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}
void push(struct Stack *stack, char value) {
    if (isFull(stack)) {
        printf("Stack Overflow\n");
    } else {
        stack->arr[++stack->top] = value;
    }
}
char pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        return '\0'; 
    } else {
        return stack->arr[stack->top--];
    }
}
void reverseString(char str[]) {
    struct Stack stack;
    initStack(&stack);
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        push(&stack, str[i]);
    }
    for (int i = 0; i < length; i++) {
        str[i] = pop(&stack);
    }
}
int main() {
    char str[MAX];
    printf("Enter a string: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = '\0';
    reverseString(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
