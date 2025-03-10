#include <stdio.h>

// Function to implement selection sort
void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;

    // Traverse the array to find the minimum element in the unsorted part
    for (i = 0; i < n-1; i++) {
        minIndex = i;
        
        // Find the index of the minimum element in the unsorted part
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the element at index i
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
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

    // Ask the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    // Declare the array
    int arr[N];

    // Get the array elements from the user
    printf("Enter the elements:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array using selection sort
    selectionSort(arr, N);

    // Print the sorted array
    printf("Sorted array: \n");
    printArray(arr, N);

    return 0;
}
