#include <iostream>
#include <climits>
using namespace std;

int minimum(int *arr, int size, int index, int mini) {
    if (index >= size) {
        return mini;
    }
    
    mini = min(mini, arr[index]);
    return minimum(arr, size, index + 1, mini);
}

int main() {
    int arr[5] = {11, 2, 3, 4, 5};
    int size = 5;
    int index = 0;
    int mini = INT_MAX;
    cout << minimum(arr, size, index, mini);
    return 0; // You should return an int from the main function.
}
