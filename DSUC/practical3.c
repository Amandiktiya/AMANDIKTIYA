// Write a program in ‘C’ to evaluate a post fix expression.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 100

// Stack structure
typedef struct Stack {
    int arr[MAX];
    int top;
} Stack;

// Function to initialize the stack
void initStack(Stack *s) {
    s->top = -1;
}

// Function to push an element onto the stack
void push(Stack *s, int value) {
    if (s->top < MAX - 1) {
        s->arr[++(s->top)] = value;
    } else {
        printf("Stack overflow\n");
    }
}

// Function to pop an element from the stack
int pop(Stack *s) {
    if (s->top >= 0) {
        return s->arr[(s->top)--];
    } else {
        printf("Stack underflow\n");
        return -1;
    }
}

// Function to evaluate a postfix expression
int evaluatePostfix(char* expression) {
    Stack s;
    initStack(&s);
    
    for (int i = 0; expression[i] != '\0'; i++) {
        char ch = expression[i];
        
        if (isdigit(ch)) {
            // If the character is a digit, push it onto the stack
            push(&s, ch - '0');
        } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            // If the character is an operator, pop two operands and apply the operator
            int operand2 = pop(&s);
            int operand1 = pop(&s);
            
            int result;
            switch (ch) {
                case '+':
                    result = operand1 + operand2;
                    break;
                case '-':
                    result = operand1 - operand2;
                    break;
                case '*':
                    result = operand1 * operand2;
                    break;
                case '/':
                    if (operand2 != 0) {
                        result = operand1 / operand2;
                    } else {
                        printf("Error: Division by zero\n");
                        return -1;
                    }
                    break;
            }
            // Push the result back onto the stack
            push(&s, result);
        }
    }
    
    // The result should be the only element left in the stack
    return pop(&s);
}

int main() {
    char expression[MAX];
    
    printf("Enter a postfix expression: ");
    scanf("%s", expression);
    
    int result = evaluatePostfix(expression);
    
    printf("Result: %d\n", result);
    
    return 0;
}
