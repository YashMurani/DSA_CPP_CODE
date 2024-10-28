#include<iostream>
using namespace std;


int main(){
    char ch[5] = {'a','s','x'};

    int  i;
    for ( i = 0; i < 5; i++)
    {
        if(ch[i]=='\0'){
            break;
        }
    }

    std::cout << i << std::endl;
    
}