// Write a program in ‘C’ for binary searching.

#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;  // Calculate the middle index

        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid;  // Return the index of the target element
        }

        // If the target is greater, ignore the left half
        if (arr[mid] < target) {
            left = mid + 1;
        }
        // If the target is smaller, ignore the right half
        else {
            right = mid - 1;
        }
    }

    return -1;  // Target not found in the array
}

int main() {
    // A sorted array for binary search
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21};
    int size = sizeof(arr) / sizeof(arr[0]);  // Size of the array

    int target;
    printf("Enter the number to search for: ");
    scanf("%d", &target);

    // Perform binary search
    int result = binarySearch(arr, size, target);

    // Display the result
    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}

