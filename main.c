#include <stdio.h>

// Function to sort an array with an alternating approach
// where the largest unsorted element is moved to the end
// and the smallest unsorted element is moved to the beginning
void alternatingEndSort(int arr[], int n) {
    int left = 0; // Index of the leftmost unsorted element
    int right = n - 1; // Index of the rightmost unsorted element

    // Loop until left and right pointers meet
    while (left < right) {
        // Move the largest unsorted element to the end
        for (int i = left; i < right; i++) {
            if (arr[i] > arr[i + 1]) {
                // Swap adjacent elements if they are out of order
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        right--; // Decrease the right pointer since the largest element is now at the end

        // Move the smallest unsorted element to the beginning
        for (int i = right; i > left; i--) {
            if (arr[i] < arr[i - 1]) {
                // Swap adjacent elements if they are out of order
                int temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
            }
        }
        left++; // Increase the left pointer since the smallest element is now at the beginning
    }
}

// Main function
int main() {
    // Array to be sorted
    int arr[] = {10, 11, 9, 1, 6, 7, 2, 3, 8, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    // Display the original array
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Sort the array using the alternating end sorting algorithm
    alternatingEndSort(arr, n);

    // Display the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0; // Return 0 to indicate successful completion
}
