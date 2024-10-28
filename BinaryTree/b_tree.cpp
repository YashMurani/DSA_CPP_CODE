#include<iostream>
using namespace std;
#include<queue>

class node {
public:
    int data;
    node* left;
    node* right;

    node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node* tree() {
    int data;
    std::cout << "Enter The value of Node " << std::endl;
    cin >> data;

    if (data == -1) {
        return NULL;
    }

    node* n = new node(data);

    std::cout << "Enter the value of left " << n->data << std::endl;
    n->left = tree();

    std::cout << "Enter the value of right " << n->data << std::endl;
    n->right = tree();

    return n;
}

void preorderTravels(node* root) {
    if (root == NULL) {
        return;
    }
    // Root 
    std::cout << root->data << std::endl;
    preorderTravels(root->left);
    preorderTravels(root->right);

    
}

void inorder(node* root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    std::cout << root->data << std::endl;
    inorder(root->right);
    
}

void postorder(node* root) {
    if (root == NULL) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    std::cout << root->data << std::endl;
    
}

void levelorder(node* root){
    queue <node *> q;
    q.push(root);
    q.push(NULL);

    while(q.size()>1){
        node *front  = q.front();
        q.pop();

        if(front==NULL){
            std::cout << std::endl;
            q.push(NULL);
        }

        else{
        cout<<front->data;
        if(front->left!=NULL){
            q.push(front->left);
        }

        if(front->right!=NULL){
            q.push(front->right);
        }
        }

       

    }


}

int main() {
    node* nodemain = tree();
    // preorderTravels(nodemain);
    // postorder(nodemain);
    // inorder(nodemain);
    // levelorder(nodemain);
}
