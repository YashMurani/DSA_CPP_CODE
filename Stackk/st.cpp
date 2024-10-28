 #include<iostream>
 using namespace std;


 class stack{

    public:

    int *arr;
    int size;
    int top;

    stack(int size){
        this->size = size;
        arr = new int[size];
         top = -1;
    }


    void push(int data){
        if(top==size-1){
            std::cout << "Stack is fuLL" << std::endl;
            return;
        }else{
            top++;
            arr[top] = data;
            std::cout << "Data pushed->" <<data<<endl;
        }
    }


    void remove(){
        if(top==-1){
            return;
        }else{
        std::cout << "Data deleted->" <<arr[top]<<endl;
        top--;
        }
    }



 };

 int main(){

    stack s(10);
    s.push(10);
    s.push(120);
    s.remove(); 
 }