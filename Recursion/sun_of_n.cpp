#include<iostream>
using namespace std;


int ans(int n){
    
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int a = n+ans(n-1);

    return a;
}

int main(){
    int n = 3;
    std::cout << ans(n) << std::endl;
}