#include<iostream>
using namespace std;



void ans(string &str, int index){ //Pass by ref heto backtracking chayegi

    if(index>=str.length()){
        std::cout << str <<  "-> ";
        return;
    }

    for(int j = index; j<str.length(); j++){
        swap(str[index], str[j]);
        ans(str, index+1);

        // BackTracking
        swap(str[index], str[j]); // jo b recursion se change hua usko nullify krenge
    }
}


int main(){
    string str = "aabc";
    int index = 0;
    int size = str.length();
    ans(str, index);
    std::cout << "" << std::endl;


    //    for(int i = 0; i<size; i++){
    //     for(int j = 0 ; j<size; j++){
    //         swap(str[i],str[j]);
    //         std::cout << str << " -> ";
    //     }
    }
