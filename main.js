// Function to sort an array with an alternating approach
// where the largest unsorted element is moved to the end
// and the smallest unsorted element is moved to the beginning
function alternatingEndSort(arr) {
    let left = 0; // Index of the leftmost unsorted element
    let right = arr.length - 1; // Index of the rightmost unsorted element

    // Loop until left and right pointers meet
    while (left < right) {
        // Move the largest unsorted element to the end
        for (let i = left; i < right; i++) {
            if (arr[i] > arr[i + 1]) {
                // Swap adjacent elements if they are out of order
                let temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        right--; // Decrease the right pointer since the largest element is now at the end

        // Move the smallest unsorted element to the beginning
        for (let i = right; i > left; i--) {
            if (arr[i] < arr[i - 1]) {
                // Swap adjacent elements if they are out of order
                let temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
            }
        }
        left++; // Increase the left pointer since the smallest element is now at the beginning
    }
}

// Usage example
let arr = [10, 11, 9, 1, 6, 7, 2, 3, 8, 5, 4];
console.log("Original array:", arr);
alternatingEndSort(arr);
console.log("Sorted array:", arr);
