#include<iostream>
using namespace std;

int main(){


int a  = 10;
// std::cout << a << std::endl;

int *b = &a;
std::cout << b << std::endl; // print tha value or adress that stored  by the printer
std::cout << *b << std::endl; //Print the value of the pointer where is points
}
