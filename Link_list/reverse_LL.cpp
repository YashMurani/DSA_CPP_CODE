#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node *next ;

    Node(int data){
        this->data = data;
        this->next = NULL;

    }

        ~Node(){
            // std::cout << "Distructor called " << std::endl;
        }
};

int len(Node* &head){
    Node* temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    std::cout << count << std::endl;

    return count;
}

void print(Node* &head){
    // std::cout << "Print method called" << std::endl;
    Node* temp = head;
    while(temp!=NULL){
        std::cout << temp->data <<"-> ";
        temp = temp->next;
    }
}

void insertAtHead(Node* &head,Node* &tail, int data){
    // std::cout << "Insert method called" << std::endl;
    Node *temp = new Node(data);
    if(head==NULL){
        head = temp;
        tail = temp; //idhar Gati ki thi such as temp = head and temp = tail kia tha make sure cant repeat
    }
    else{
        temp->next = head;
        head = temp;
    }

}

void insertAtTail(Node* &head, Node* &tail, int data){
    Node *temp  =  new Node(data);
    if(head==NULL){
        head = temp;
        tail = temp;
    }

    else{
        tail->next = temp;
        tail = temp;
    }
}

void inserAtPos(Node* &head, Node* &tail, int data, int pos){
    if(pos<=1){
        insertAtHead(head,tail,data);
    }
    else{
        Node * prv = NULL;
        Node *current  = head;

        while(pos!=1){
            prv = current;
            current = current->next;
            pos--;
        }

    Node *temp = new Node(data);
    prv->next = temp;
    temp->next = current;

    }
}

void del(Node * &head, Node* &tail, int pos){

    int size = len(head);

    if(head==NULL){
        return;
    }

    if(head==tail){
        Node* temp = head;
        temp = head;
        temp->next = NULL;
        delete temp;
    }

    if(pos==1){
        std::cout << "Head delete" << std::endl;
        //Dekete head
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;

    }

    else if (pos==size)
    {
        std::cout << "Delete end" << std::endl;
        //Delete Tail;
        Node* previous = head;
        while(previous->next != tail){
            previous = previous->next;
        }
        previous->next = NULL;
        delete tail;
        tail = previous;
    }
    else{
        std::cout << "Delete mid " << std::endl;
        Node* prev= NULL;
        Node * current = head;

        while(pos!=1){
            pos--;
            prev = current;
            current  = current->next;
        }

        prev->next = current->next;
    }

}

void reverseLL(Node* &head , Node *& tail){
    
}


int main(){
    Node * head = NULL;
    Node * tail = NULL;

    insertAtHead(head, tail,5);
    insertAtHead(head, tail,10);
    insertAtTail(head,tail,100);
    insertAtTail(head,tail,1000);
    inserAtPos(head,tail,1,1);
    inserAtPos(head,tail,2,2);
   
    print(head);
    
}