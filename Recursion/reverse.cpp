#include<iostream>
using namespace std;

void sol(string str , int start, int end){

if(start>=end){
    std::cout << "True" << std::endl;
    return;
}

if(str[start]!=str[end]){
    std::cout << "Not True" << std::endl;
    return;
}



    sol(str,start+1,end-1);

}

int main(){
    string str = "aba";
   
    int size = str.length();
    sol(str,0,size-1);
    
}
