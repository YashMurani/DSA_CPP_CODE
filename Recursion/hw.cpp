// str = "yashaya"; target = a; find index of all A



#include<iostream>
using namespace std;

void ans(string ch, char target, int index){

    if(index>ch.length()){
        return ;
    }

    if(ch[index]==target){
        std::cout << index << std::endl;
    }

    ans(ch,target,index+1);

}

int main(){
    string name = "Yash";
    char ch = 'h';
    ans(name,ch,0);
}