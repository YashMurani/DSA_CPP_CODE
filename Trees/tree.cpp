#include<iostream>
using namespace std;


//Binary tree have  atmost 2 childs only

class node{
    public:
    int data;
    node* left;
    node* right;


    node(int d){
        this->data= d;
        this->left=NULL;
        this->right = NULL;
    }
};

node* createTree(){

    std::cout << "Enter root node value" << std::endl;
    int data;
    cin>>data;
    node* root = new node(data);
    if(data==-1){
        return NULL;
    }
    //left of root
    std::cout << "Enter the value for left of "  << root->data<< std::endl;
    root->left = createTree();

    std::cout << "Enter the value for right of "  << root->data<< std::endl;
    root->right = createTree();

    return root;

}

int main(){
    node* root = createTree();
    std::cout << "The value of root node which is constructed by call and root data is " << root->data<< ::endl;
}