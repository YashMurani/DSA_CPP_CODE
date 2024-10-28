#include<iostream>
using namespace std;


string sol(string s){
    int n = s.length()-1;
    string ans;

    for (int i = 0; i < n; i++)
    {
        if(ans.empty()||s[i]!=ans.back()){
            ans.push_back(s[i]);
        }else{
            ans.pop_back();
        }
    }

    return ans;

}

int main(){
    string s = "aabsddaaw";
    std::cout << sol(s)<< std::endl;
}