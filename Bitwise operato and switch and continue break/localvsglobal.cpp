#include<iostream>
using namespace std;

    //Global varibale u can access that at any where
    int global = 1;

int main(){

    //private block and i create local variable inside the block called int pvt this is nt accassable out side of it
    if(true){
        int pvt  = 1;
        std::cout << "inside the pvt block i can print global ->" <<global<< std::endl;
        std::cout << pvt << std::endl; //only printable with in it only
    }

    //Error says pvt is not defined
    // std::cout << pvt << std::endl;

    std::cout << "out side the pvt function i cal also called the global variable ->" <<global<< std::endl;


}