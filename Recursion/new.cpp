#include <iostream>
using namespace std;

void ans(int n) {
    if (n == 0) {
        return;
    }

    int num = n % 10;
    n = n / 10;  // Corrected this line

    ans(n);

    std::cout << num << " "; // Print the digit with a space
}

int main() {
    int n = 1234567;
    ans(n);

    return 0;
}
