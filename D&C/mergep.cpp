#include <iostream>
using namespace std;

void MergeArray(int arr[], int start, int end, int mid) {
    int leftSize = mid - start + 1;
    int rightSize = end - mid;

    int *leftArray = new int[leftSize];
    int *rightArray = new int[rightSize];

    for (int i = 0; i < leftSize; i++) {
        leftArray[i] = arr[start + i];
    }

    for (int i = 0; i < rightSize; i++) {
        rightArray[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = start;

    // Merge the left and right subarrays back into the original array
    while (i < leftSize && j < rightSize) {
        if (leftArray[i] <= rightArray[j]) {
            arr[k] = leftArray[i];
            i++;
        } else {
            arr[k] = rightArray[j];
            j++;
        }
        k++;
    }

    while (i < leftSize) {
        arr[k] = leftArray[i];
        i++;
        k++;
    }

    while (j < rightSize) {
        arr[k] = rightArray[j];
        j++;
        k++;
    }

    // Clean up the temporary arrays
    delete[] leftArray;
    delete[] rightArray;
}

void merge(int arr[], int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2;
        merge(arr, start, mid);
        merge(arr, mid + 1, end);
        MergeArray(arr, start, end, mid);
    }
}

int main() {
    int arr[5] = {1, 22, 3, 2, 4};
    int size = 5;
    int start = 0;
    int end = size - 1;

    merge(arr, start, end);

    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
