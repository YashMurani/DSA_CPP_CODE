#include <iostream>
#include <vector>
using namespace std;

int floor(vector<int> a, int target) {

    int s = 0;
    int e = a.size() - 1;

    int result = -1;  // Rename the variable to avoid naming conflict

    while (s <= e) {
        int mid = (s + e) / 2;

        if (a[mid] >= target) {
            result = a[mid];
            e = mid -1 ;
        } else {
            s = mid + 1;
        }
    }

    return result;
}

int main() {
    vector<int> v ;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    
    int x = 25;
    cout << floor(v, x) << endl;  // Add endl for a newline
}
