#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node* createTree(){

    std::cout << "Enter the data for root node" << std::endl;
    int root_data;
    cin >> root_data;

    if(root_data==-1){
        return NULL;
    }
    node* root = new node(root_data);

    std::cout << "Enter the value of left of: " <<  root->data<<std::endl;
    root->left = createTree();

    std::cout << "Enter value of right of: " << root->data<< std::endl;
    root->right = createTree();
    return root;
}


int main(){
    node * r = createTree();

}
