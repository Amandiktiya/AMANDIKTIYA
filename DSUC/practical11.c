// Write a program in ‘C’ to sort ‘N’ Numbers using Insertion sort.

#include <stdio.h>

// Function to perform insertion sort
void insertionSort(int arr[], int n) {
    int i, j, key;
    
    // Start from the second element (index 1) and move forward
    for (i = 1; i < n; i++) {
        key = arr[i];  // Element to be inserted
        j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        // Insert the key at the correct position
        arr[j + 1] = key;
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    // Take the number of elements as input
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];

    // Take the array elements as input
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array using insertion sort
    insertionSort(arr, n);

    // Print the sorted array
    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
