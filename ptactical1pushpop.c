#include <stdio.h>
#include <stdlib.h>
#define MAX 5 

struct Stack {
    int arr[MAX];
    int top;
};

void initializeStack(struct Stack* stack) {
    stack->top = -1; 
}
int isFull(struct Stack* stack) {
    return stack->top == MAX - 1;
}
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}
void push(struct Stack* stack, int value) {
    if (isFull(stack)) {
        printf("Stack Overflow! Unable to push %d\n", value);
    } else {
        stack->arr[++(stack->top)] = value;
        printf("%d pushed to stack\n", value);
    }
}
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow! Unable to pop\n");
        return -1; 
    } else {
        return stack->arr[(stack->top)--];
    }
}
void display(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= stack->top; i++) {
            printf("%d ", stack->arr[i]);
        }
        printf("\n");
    }
}
int main() {
    struct Stack stack;
    initializeStack(&stack);

    int choice, value;

    while (1) {
        printf("\nStack Operations:\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(&stack, value);
                break;
            case 2:
                value = pop(&stack);
                if (value != -1) {
                    printf("%d popped from stack\n", value);
                }
                break;
            case 3:
                display(&stack);
                break;
            case 4:
                printf("Exiting program\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
