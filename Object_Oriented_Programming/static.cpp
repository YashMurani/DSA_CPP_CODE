#include <iostream>
using namespace std;

class abc {
public:
//Accessing only this varibale by all instance obj of this class a is same for Eone
    static int a;

//A this function is static this can accessable by all the objects of the class
    static void p(){
        std::cout << "Hello i am public for everyone" << std::endl;
    }

    void someMethod() {
        std::cout << "I am a method of the abc class" << std::endl;
    }
};

int abc::a = 0; // You need to define the static member variable outside the class.

int main() {
    abc o1;
    abc o2;

    o2.a = 10;
    

    o1.someMethod(); // Calling the method
    cout << "Static variable a: " << o1.a << endl; // Accessing the static variable
    cout << "Static variable a: " << o2.a << endl; // Accessing the static variable

    o1.a = 20;
    cout << "Static variable a: " << o1.a << endl; // Accessing the static variable
    cout << "Static variable a: " << o2.a << endl; // Accessing the static variable

    o1.p();
    o2.p();

    return 0;
}




int f(int n){
    int count  =0;

    for (int i = 0; i < n; i++)
    {
        for(int j = i ; j>0; j--){
            count++;
        }
    }
    return count;
}



