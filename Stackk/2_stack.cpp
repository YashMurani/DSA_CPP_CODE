#include<iostream>
using namespace std;

class stack {
public:
    int *arr;
    int size;
    int top;
    int top1;

    stack(int size) {
        arr = new int[size];
        this->size = size;
        top = -1;
        top1 = size - 1;
    }

    void push(int data) {
        if (top1 - top == 1) {
            std::cout << "Overflow" << std::endl;
        } else {
            top++;
            arr[top] = data;
            std::cout << "AAge se add kr dia hai " << data << endl;
        }
    }

    void push2(int data) {
        if (top1 - top == 1) {
            std::cout << "Underflow" << std::endl;
            return;
        } else {
            top1--;
            arr[top1] = data;
            std::cout << "Piche se add kr dia " << data << endl;
        }
    }

    void pop1() {
        if (top == -1) {
            std::cout << "Underflow" << std::endl;
        } else {
            std::cout << arr[top] << " Deleted" << std::endl;
            top--;
        }
    }

    void pop2() {
        if (top1 == size - 1) {
            std::cout << "Underflow" << std::endl;
            return;
        } else {
            std::cout << "Deleted " << arr[top1] << std::endl;
            top1++;  // Corrected this line from top1++ to top1--
        }
    }
};

int main() {
    stack s(10);
    s.push(10);
    s.push2(200);
    s.pop1();
    s.pop2();
    s.pop2();
    s.pop2();
    // return 0;
    s.pop1();
    s.push(11);
    s.pop1();
}
