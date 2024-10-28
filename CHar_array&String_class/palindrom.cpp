#include<iostream>
using namespace std;

bool sol(char ch[], int n){
    int s  = 0;
    int e = n-1;

    while(s<=e){
     if(ch[s]==ch[e]){
        s++;
        e--;
     }else{
        return false;
     }
    }
  
return true;
     
}


int main(){
    char ch[5] = {'a','b','c','b','a'};
    // sol(ch,5);
std::cout << sol(ch,5) << std::endl;
}