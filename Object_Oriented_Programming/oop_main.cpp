#include <iostream>
using namespace std;

class student {
public:
    int marks;
    string name;

private:
    string gf;

public:
    student(int _marks, string _name, string _gf) : marks(_marks), name(_name), gf(_gf) {
        cout << "Parameterized constructor called" << endl;
    }

    ~student() {
        cout << "Destructor called" << endl;
    }

    //Setter to set the value of pvt member 
    void setgf(string gfname){
        this->gf = gfname;
    }

    //Getter merhod to get the pvt value in main function
    string getGf() {
        return gf;
    }

    
};

int main() {
    student s1(100, "yash", "vidya");

    cout << s1.name << endl; // This will work since 'name' is public
    // cout << s1.gf << endl; // This will result in a compilation error

    s1.setgf("mahek");
    cout << s1.getGf() << endl; // You can access 'gf' using the getter method

    return 0;
}
