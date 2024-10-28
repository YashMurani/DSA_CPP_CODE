#include<iostream>
using namespace std;
#include<stack>

int main(){


    stack<char> st;

    string name = "YASH-MURANI";

    for(int i = 0 ;i<name.length(); i++){
        st.push(name[i]);
    }

    while(!st.empty()){
        cout << st.top();        
        st.pop();
    }


}