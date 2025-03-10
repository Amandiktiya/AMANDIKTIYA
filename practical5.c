#include <stdio.h>

// Function to calculate factorial using recursion
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 or 1 is 1
    } else {
        return n * factorial(n - 1); // Recursive call
    }
}

int main() {
    int num;
    
    // Ask the user for input
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num);
    
    // Check for negative input
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate and display the factorial
        int result = factorial(num);
        printf("Factorial of %d is %d\n", num, result);
    }
    
    return 0;
}
