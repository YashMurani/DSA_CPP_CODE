#include<iostream>
using namespace std;

void sol(char ch[], int n){
    int s  = 0;
    int e = n-1;

    while(s<=e){
        swap(ch[s],ch[e]);
        s++;
        e--;
    }
}


int main(){
    char ch[5] = {'a','b','c','d','e'};
    sol(ch,5);

    std::cout << ch << std::endl;
}