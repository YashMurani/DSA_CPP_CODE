#include <iostream>
using namespace std;

int bs(int arr[], int start, int end, int x) {
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == x) {
            return mid;
        }

        if (arr[mid] < x) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int exponential(int arr[], int size, int x) {
    if (arr[0] == x) {
        return 0;
    }

    int i = 1;
    while (i < size && arr[i] < x) {
        i *= 2;
    }

    // Add a return statement here
    return bs(arr, i / 2, i, x);
}

int main() {
    int arr[] = {1, 21, 31, 43, 55, 65, 76};
    int size = sizeof(arr) / sizeof(int);
    int x = 31;
    cout << exponential(arr, size, x);

    return 0;
}
