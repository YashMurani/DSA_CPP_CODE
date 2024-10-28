#include <iostream>

class Queue {
public:
    int size;
    int *arr;
    int front;
    int rear;

    Queue(int size) {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int data) {
        // check full
        if (rear == size - 1) {
            std::cout << "Queue is overflow" << std::endl;
            return;
        } else if (front == -1 && rear == -1) {
            // empty case
            front++;
            rear++;
            arr[rear] = data;
        } else {
            rear++;
            arr[rear] = data;
        }
    }

    void pop() {
        if (front == -1 && rear == -1) {
            std::cout << "Underflow" << std::endl;
            return;
        } else if (front == rear) {
            arr[front] = -1;
            front = -1;
            rear = -1;
        } else {
            arr[front] = -1;
            front++;
        }
    }

    bool isEmpty() {
        if (front == -1 && rear == -1) {
            std::cout << "Empty" << std::endl;
            return true;
        } else {
            std::cout << "Not empty" << std::endl;
            return false;
        }
    }

    int getSize() {
        if(front==-1 && rear == -1){
            return 0;
        }
        else
        return rear - front + 1;
    }

    int getFront() {
        if (front == -1) {
            std::cout << "No element in queue" << std::endl;
            return -1;
        } else {
            return arr[front];
        }
    }

    void print() {
        for (int i = front; i <=getSize(); i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Queue q(6);
    
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(1);

    q.push(2);
    q.push(3);
    q.push(3);
    q.print();
    q.pop();
    q.print();

}
