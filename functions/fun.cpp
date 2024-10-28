#include<iostream>
using namespace std;

//Function to be addition of sum
void sum(int a, int b)
{
    std::cout << a+b << std::endl;
}


// function to print the name
void printname(string name){
    for(int i = 0 ; i<5; i++){
        std::cout << name << std::endl;
    }
    std::cout << "Print name function has been eneded as per the code logic is th over" << std::endl;
}

// function to devide the number -> return something returnable function this is 
int devide(int a, int b){
    std::cout << a/b << std::endl;
    return 0;
}

int nSUm(int num){
    int ans = 0;
    for (size_t i = 1; i < num; i++)
    {
       ans = ans+i;
    }

    return ans;
}

void evenodd(int num){
    if(num%2==0){
        std::cout << "This is even n number" << std::endl;
    }else{
        std::cout << "This is odd number" << std::endl;
    }
}


int main(){
    // std::cout << "Hello G welcome to the world of the functions" << std::endl;


    // sum(10,20);
    // sum(10,10);
    // printname("Yash");
    // devide(10,5);
    // evenodd(10);
    // evenodd(11);
}