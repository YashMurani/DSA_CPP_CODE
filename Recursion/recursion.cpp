#include <iostream>

// Recursive function to calculate 2^n
int powerOfTwo(int n) {
    if (n == 0) {
        return 1;
    } else {
        return 2 * powerOfTwo(n - 1);
    }
}

int main() {
    int n = 5;
  
    
    if (n < 0) {
        std::cout << "Exponent should be non-negative." << std::endl;
    } else {
        int result = powerOfTwo(n);
        std::cout << "2^" << n << " = " << result << std::endl;
    }
    
    return 0;
}
