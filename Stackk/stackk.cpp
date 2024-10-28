#include<iostream>
using namespace std;

class stack{

    public:
    int* arr;
    int size;
    int top;

        stack(int size){
             arr = new int[size];
            this->size = size;
            top = -1;
        }



        void push(int data){
            if(top==size-1){
                std::cout << "Stack overflow" << std::endl;
                return;
            }else{
                top++;
                arr[top] = data;
            }
        }

        void pop(){

            if(top==-1){
                std::cout << "Stack is already Empty" << std::endl;
                return;
            }
            std::cout << arr[top] <<" Deleted"<<endl;
            top--;
        }

        bool isempty(){
            if(top == size-1){
                    return true;
            }else{
                    return false;
            }
        }

        void peak(){
            
            std::cout << arr[top] << std::endl;
        }
};

int main(){

    stack st(8);
    st.push(10);
    // st.peak();
       st.push(20);
       st.push(20);
       st.push(20);
       st.push(20);
       st.push(20);
       st.push(200);
       st.push(20);

  

}