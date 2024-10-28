#include<iostream>
using namespace std;

int ans (int a, int b){
    return a+b;
}
int ans (int a, int b, int c){
    return a+b+c;
}
int ans (int a, int b, int c, int d){
    return a+b+c+d;
}


int main(){
    std::cout << ans(10,20) << std::endl;
    std::cout << ans(10,20,30) << std::endl;
    std::cout << ans(10,20,30,40) << std::endl;
}