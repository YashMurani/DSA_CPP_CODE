#include<iostream>
using namespace std;

string removeOccurrences(string s, string part) {
        while(s.find(part)!= string::npos){
            s.erase(s.find(part),part.length());
        }
        return s;
    }

int main(){
    string s = "yashpatelyashpatel";
    string part = "yash";
    std::cout << removeOccurrences(s,part) << std::endl;
}