#include <iostream>
using namespace std;

class bird {
public:
    string color;
    int age;
    int weight;

    void fly() {
        cout << "Bird fly ye main bird ka he" << endl;
    }

    void eat() {
        cout << "Eating" << endl;
    }
};

class sparrow : public bird {
public:
    sparrow(string _color, int _age)  {

        color = _color;
        age = _age;
    }

    void chiw() {
        cout << "Sparrow chirping ye sparrow mese hi aa rha he" << endl;
    }
};

class kabutar : public bird{

    public: 
    kabutar(string _color, int _age){
        color = _color;
        age = _age;
    }

    void peogon(){
    cout << "I am peogon" << endl;
    }
    
};

int main() {
    sparrow s("Brown", 2);
    s.fly();  // Accessing the fly method from the base class
    s.chiw(); // Accessing the chiw method from the derived class

    kabutar k("Kabutar",20);
    k.fly();
    k.peogon();
    return 0;

    
}
