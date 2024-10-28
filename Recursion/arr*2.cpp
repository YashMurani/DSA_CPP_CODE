#include <iostream>
using namespace std;

void ans(int arr[], int size, int index) {
    if (index >= size) {
        return;
    }

    arr[index] = arr[index] + arr[index];

    ans(arr, size, index + 1);
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int index = 0

    ans(arr, size, index);

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << std::endl;
    }
    std::cout << "end" << std::endl;

    return 0;
}
