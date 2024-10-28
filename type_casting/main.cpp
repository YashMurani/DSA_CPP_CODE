#include<iostream>
using namespace std;

int main(){

// type casting is the method to conert the one dt to another DT such as int to float there are 2 various method 1_impilict and the 2_ expilicit



// Implicit type casting...


// Such as also called automatic type cast where compiler automatic convert by it self
// Always convert into samll dt into large datatype
// // No chances of the data lost here

// int a = 1;
// float b  = 2.2;

// float ans = a+b; // here b is float and a is int as rule smaller convert to large so int convert float as we need float in rel so
// std::cout << ans << std::endl;
  

// char to int convertion

// char q = 'a';
// int ans = q; // such as a cant store as A a is something 97 as ASCII so when you store in ans int so it becomes 97 as ans
// std::cout << ans << std::endl;


// Explicit Type casting.....


// manual convertion
// Large data type to small datatype
// Chances of data lost

float a = 1.1;
int b = 1;

float ans = int(a)+b;
std::cout << ans << std::endl;

}