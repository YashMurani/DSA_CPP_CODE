#include<iostream>
using namespace std;

int main(){



string str = "yash";
string str1 = "Murani";
std::cout << str << std::endl;
std::cout << str.length() << std::endl;
std::cout << str[0] << std::endl;
std::cout << str.at(1) << std::endl;
std::cout << str.empty() << std::endl;
std::cout << str.append(str1) << std::endl;

}