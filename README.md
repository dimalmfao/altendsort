# Alternating End Sort Algorithm

The Alternating End Sort Algorithm is a custom sorting algorithm designed to sort an array by repeatedly selecting the largest and smallest unsorted elements and moving them to their respective ends. This algorithm provides an alternative approach to sorting data compared to traditional sorting algorithms.

## Overview

The Alternating End Sort Algorithm works by iteratively moving the largest unsorted element to the end of the array and the smallest unsorted element to the beginning of the array. This process continues until the entire array is sorted. The algorithm alternates between selecting the largest and smallest unsorted elements, which gives it its distinctive behavior.

## Features

- Custom sorting algorithm designed for educational and experimental purposes.
- Provides an alternative approach to sorting by alternating between selecting the largest and smallest unsorted elements.
- Implemented in C for simplicity and ease of understanding.

## Usage

To use the Alternating End Sort Algorithm in your project, follow these steps:

1. Include the `alternating_end_sort.c` file in your project.
2. Call the `alternatingEndSort` function, passing the array to be sorted and its length as parameters.
3. The function will modify the input array in place, sorting it in ascending order.

Example usage:

```c
#include <stdio.h>

void alternatingEndSort(int arr[], int n) {
    // Implementation of the algorithm...
}

int main() {
    int arr[] = {9, 1, 6, 7, 2, 3, 8, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    alternatingEndSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
```

Yeah, that's all.
