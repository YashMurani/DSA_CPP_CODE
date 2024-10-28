#include<iostream>
#include<vector>
using namespace std;

int first(vector<int>& arr, int n, int x) {
    int s = 0;
    int e = n - 1;
    int ans = -1;

    while (s <= e) {
        int mid = (s + e) / 2;

        if (arr[mid] == x) {
            ans = mid;
            e = mid - 1;
        } else if (arr[mid] < x) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }

    return ans;
}

int last(vector<int>& arr, int n, int x) {
    int s = 0;
    int e = n - 1;
    int ans = -1;

    while (s <= e) {
        int mid = (s + e) / 2;

        if (arr[mid] == x) {
            ans = mid;
            s = mid + 1;
        } else if (arr[mid] < x) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }

    return ans;
}

int count(vector<int>& arr, int n, int x) {
    int start = first(arr, n, x);
    int lastIdx = last(arr, n, x);

    if (start == -1 || lastIdx == -1) {
        return 0; // Element not found
    }

    return lastIdx - start + 1;
}

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(3);


    cout << count(v, v.size(), 3) << endl;

    return 0;
}
