#include<iostream>
using namespace std;

void quick(int arr[], int start, int end) {

    if (start >= end) return;

    int pivot = end;
    int i = start - 1;
    int j = start;

    while (j <= pivot) { 
        if (arr[j] < arr[pivot]) {
            ++i;
            swap(arr[i], arr[j]);
        }
       
        ++j;
    }

    ++i;
    swap(arr[i], arr[pivot]);

    quick(arr, start, i - 1);
    quick(arr, i + 1, end);  // Change this line from "quick(arr, i + 1, end);" to "quick(arr, i + 1, end - 1);"
}

int main() {

    int arr[5] = {21, 23, 2, 9, 10};
    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << "->";
    }
    std::cout << "" << std::endl;
    std::cout << "After Sorting" << std::endl;

    quick(arr, 0, 5);

    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << "->";
    }
}

