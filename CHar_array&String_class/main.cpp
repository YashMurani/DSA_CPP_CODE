#include<iostream>
using namespace std;

int main(){

    char ch[5] = {'y','a','s'}; //-> There is always termination of string with NULL char - > y a s '/n' -> NULL CHAR FOR TERMINATION
    std::cout << ch << std::endl;
    
    
    // cin>>ch;
    // Normal CIN stop taking data after space or tab such as YASH MURANI takes yash only when space seen then next text cant take as iP
    // solution
    cin.getline(ch,5);

    
}

