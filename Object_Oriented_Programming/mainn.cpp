#include <iostream>
using namespace std;

class student {
public:
    int marks;
    string name;
    int age;
    int Stand;

private:
    string gf;

public:
    // Constructor should be declared like this
    student(int _marks, int _age, int _Stand, string _name) {
        std::cout << "I am the main constructor" << std::endl;
        name = _name;
        marks = _marks;
        age = _age;
        Stand = _Stand;
    }

        // Constructor should be declared like this This will call automatically wwhen there is user cant pass the age so compiler automatically understand which method it should call as per the ip
    student(int marks, int Stand, string name) {
        std::cout << "I am the main constructor with out age" << std::endl;

        //This-> refers the member of the class which defines upper and the var is which is arg pass in function

        this->name = name;
        this->marks = marks;
        // / age = age;
        this->Stand = Stand;
    }


    //Bina matlab k banaya he😂
    void s(string name) {
        std::cout << "Hello, I am " << name<< std::endl;
    }

   
};

int main() {
    std::cout << "Hello OOPS" << std::endl;
    student s1(100, 18, 1, "yash"); // Creating an instance of the student class
    // std::cout << s1.name << std::endl;
    s1.s("yash");
    // s1.s();
    // s1.sleep();


std::cout << "" << std::endl;
    student s2(90,2,"ANnsh");
    std::cout << s2.name << std::endl;
    return 0; // You should return 0 to indicate successful program execution.



}
