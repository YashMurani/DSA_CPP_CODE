#include<iostream>
using namespace std;

int bs(int arr[], int s, int e, int target) {
    if (s > e) {
        return -1;
    }

    int mid = s + (e - s) / 2;

    if (arr[mid] == target) {
        return mid;
    }

    if (arr[mid] < target) {
        return bs(arr, mid + 1, e, target);
    }
    else {
        return bs(arr, s, mid - 1, target);
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    cout << bs(arr, 0, 4, 4);
}
