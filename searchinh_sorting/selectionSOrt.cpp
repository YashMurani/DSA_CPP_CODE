#include <iostream>
using namespace std;

// Time complexity 0(n^2);

void selectionsort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // Store the index of the minimum element

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
            // Swap the elements
            swap(arr[i], arr[minIndex]);
        
    }
}

int main() {
    int arr[5] = {23, 3, 1, 355, 12};

    cout << "Before sorting:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << "->";
    }

    selectionsort(arr, 5);

    cout << endl << endl;
    cout << "After sorting:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << "->";
    }

    return 0;
}
