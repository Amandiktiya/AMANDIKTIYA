#include <stdio.h>
#include <stdlib.h>

#define MAX 5  // Defining the maximum size of the stack

// Stack structure
struct Stack {
    int arr[MAX];
    int top;
};

// Function to initialize the stack
void initializeStack(struct Stack* stack) {
    stack->top = -1;  // Stack is initially empty
}

// Function to check if the stack is full
int isFull(struct Stack* stack) {
    return stack->top == MAX - 1;
}

// Function to PUSH an element onto the stack
void push(struct Stack* stack, int value) {
    if (isFull(stack)) {
        printf("Stack Overflow! Unable to push %d\n", value);
    } else {
        stack->arr[++(stack->top)] = value;
        printf("%d pushed to stack\n", value);
    }
}

// Function to display the elements of the stack
void display(struct Stack* stack) {
    if (stack->top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= stack->top; i++) {
            printf("%d ", stack->arr[i]);
        }
        printf("\n");
    }
}

// Main function
int main() {
    struct Stack stack;
    initializeStack(&stack);

    int value;
    int choice;

    while (1) {
        printf("\nStack Operations:\n");
        printf("1. PUSH\n");
        printf("2. Display\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(&stack, value);
                break;
            case 2:
                display(&stack);
                break;
            case 3:
                printf("Exiting program\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
