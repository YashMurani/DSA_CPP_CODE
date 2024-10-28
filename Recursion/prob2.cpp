// Reverse print given value N to 1 using recursion only;

#include<iostream>
using namespace std;


void printValue(int n){
    if(n==1){
        std::cout << "1" << std::endl;
        std::cout << "Printing Done" << std::endl;
    }else{
        std::cout << n << std::endl;
        printValue(n-1);
    }
}


int main(){
    int n = 10;
    printValue(n);
}
