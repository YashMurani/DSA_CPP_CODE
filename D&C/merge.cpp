#include <iostream>
using namespace std;

void MergeArray(int arr[], int start, int end, int mid) {
    int leftSize = mid - start + 1; // Size of the left subarray
    int rightSize = end - mid;      // Size of the right subarray

    int *leftArray = new int[leftSize]; // Create a temporary left subarray
    int *rightArray = new int[rightSize]; // Create a temporary right subarray

    // Copy elements from the original array to the left subarray
    for (int i = 0; i < leftSize; i++) {
        leftArray[i] = arr[start + i];
    }

    // Copy elements from the original array to the right subarray
    for (int i = 0; i < rightSize; i++) {
        rightArray[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = start;

    // Merge the left and right subarrays back into the original array
    while (i < leftSize && j < rightSize) {
        if (leftArray[i] <= rightArray[j]) {
            arr[k++] = leftArray[i++];
        } else {
            arr[k++] = rightArray[j++];
        }
    }

    // Copy any remaining elements from the left subarray
    while (i < leftSize) {
        arr[k++] = leftArray[i++];
    }

    // Copy any remaining elements from the right subarray
    while (j < rightSize) {
        arr[k++] = rightArray[j++];
    }

    // Clean up the temporary arrays
    delete[] leftArray;
    delete[] rightArray;
}

void merge(int arr[], int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2; // Calculate the middle index

        // Recursively sort the left and right halves
        merge(arr, start, mid);
        merge(arr, mid + 1, end);

        // Merge the sorted subarrays
        MergeArray(arr, start, end, mid);
    }
}

int main() {
    int arr[5] = {1, 22, 3, 2, 4};
    int size = 5;
    int start = 0;
    int end = size - 1;

    // Call the merge function to sort the array
    merge(arr, start, end);

    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
