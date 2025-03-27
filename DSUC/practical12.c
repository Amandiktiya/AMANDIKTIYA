// . Write a program in ‘C’ to sort ‘N’ Numbers using bubble sort

#include <stdio.h>

// Function to implement bubble sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    
    // Traverse through all elements in the array
    for (i = 0; i < n-1; i++) {
        // Last i elements are already sorted
        for (j = 0; j < n-i-1; j++) {
            // Swap if the element is greater than the next element
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int N, i;

    // Get the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    // Declare an array of size N
    int arr[N];

    // Get the array elements from the user
    printf("Enter the elements:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Call bubbleSort to sort the array
    bubbleSort(arr, N);

    // Print the sorted array
    printf("Sorted array: \n");
    printArray(arr, N);

    return 0;
}
