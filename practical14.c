#include <stdio.h>
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Choose the last element as pivot
    int i = (low - 1);  // index of smaller element
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;  // Increment the index of smaller element
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);  // Return the partition index
}
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        // Recursively sort the two halves
        quickSort(arr, low, pi - 1);  // Left part
        quickSort(arr, pi + 1, high); // Right part
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int N;
    printf("Enter the number of elements: ");
    scanf("%d", &N);
    int arr[N];
    printf("Enter the elements:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    quickSort(arr, 0, N - 1);
    printf("Sorted array: \n");
    printArray(arr, N);
    return 0;
}
