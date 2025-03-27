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

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Function to POP an element from the stack
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow! Unable to pop\n");
        return -1;  // Return -1 if the stack is empty
    } else {
        return stack->arr[(stack->top)--];
    }
}

// Function to display the elements of the stack
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

// Main function
int main() {
    struct Stack stack;
    initializeStack(&stack);

    int choice;
    int poppedValue;

    while (1) {
        printf("\nStack Operations:\n");
        printf("1. POP\n");
        printf("2. Display\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                poppedValue = pop(&stack);
                if (poppedValue != -1) {
                    printf("%d popped from stack\n", poppedValue);
                }
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
