#include<iostream>
#include<queue>
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

node* tree(){
    cout << "Enter Value of Node: " << endl;
    int data;
    cin >> data;

    if (data == -1) {
        return NULL;
    }

    node* root = new node(data);

    cout << "Enter the value of left of " << root->data << ": " << endl;
    root->left = tree();
    
    cout << "Enter the value of right of " << root->data << ": " << endl;
    root->right = tree();

    return root;
}

int height(node* root){
    if(root == NULL){
        return 0;
    }

    queue<node*> q;
    q.push(root);
    q.push(NULL);
    int ans = 1;

    while(!q.empty()){
        node* front = q.front();
        q.pop();

        if(front == NULL){
            if(!q.empty()) {
                q.push(NULL);
                ans++;
            }
        } else {
            if(front->left != NULL){
                q.push(front->left);
            }
            if(front->right != NULL){
                q.push(front->right);
            }
        }
    }

    return ans;
}

int main(){
    node* root = tree();
    cout << "Height of the tree: " << height(root) << endl;
    return 0;
}