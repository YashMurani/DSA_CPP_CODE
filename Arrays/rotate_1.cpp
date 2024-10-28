#include <iostream>
#include <vector>
using namespace std;

vector<int> rotateArray(vector<int>& arr, int n) {
    int size = arr.size();
    int last = arr[size - 1];

    for (int i = 0; i < size - 1; i+=2) {
        arr[i + 1] = arr[i];
    }
    arr[0] = last;

    return arr;
}

int main() {
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);

    int n = 5;
    vector<int> rotatedArr = rotateArray(arr, n);

    for (int i = 0; i < rotatedArr.size(); i++) {
        cout << rotatedArr[i] << " ";
    }
    cout << endl;

    return 0;
}
