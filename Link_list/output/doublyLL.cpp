#include <iostream>
using namespace std;

class node{
  public:
  int data;
  node*prev;
  node*next;

  node(int data){
    this->data= data;
    this->next = NULL;
    this->prev = NULL;
  }

};

void print(node*&head){
  node* temp = head;
  while(temp!=NULL){
    cout<<temp->data<<"->";
    temp = temp->next;
  }
}

int size(node* &head){
  node *temp = head;
  int count = 0;
  while(temp!=NULL){
    count++;
    temp = temp->next;
  }
  return count;
}

void insertAthead(node* &head, node* &tail, int data){
  node* temp = new node(data);
  if(head==NULL){
    head = temp;
    tail = temp;
  }else{
    temp->next = head;
    head->prev = temp;
    head = temp;
  }
}

void insertAtTail(node* &head, node *&tail , int data){
  node* temp = new node(data);
  if(head==NULL){
    head = temp;
    tail = temp;
  }

  tail->next = temp;
  temp->prev = tail;
  tail = temp;
}

void insertAtpos(node* &head, node *&tail , int data, int pos){
  int len= size(head);
  node* temp = new node(data);
  if(pos==1){
    insertAthead(head,tail,data);
  }
  else if(pos==len||pos>len){
    insertAtTail(head,tail,data);
  }
  else{
    node *previos = NULL;
    node* current  = head;

    while(pos!=1){
      previos= current;
      current = current->next;
      pos--;
    }

  previos->next = temp;
  temp->prev = previos;
  temp->next = current;
  current->prev = temp;

  }
}

void del(node* &head, node*&tail, int pos){
  int s = size(head);

  if(pos==1){
    //Head delete
    node* temp = head;
    head = temp->next;
    temp->next = NULL;
    delete temp;
  }

 else if(pos==s||pos>s){
  //TAIL delete
    node*temp = tail;
    tail = tail->prev;
    temp->next = NULL;
    temp->prev= NULL;
    delete temp;
  }

  else{
    node* previous = NULL;
    node* current = head;

    while(pos!=1){
      previous= current;
      current = current ->next;
      pos--;
    }

    node* next = current->next;
    previous->next = current->next;
    next->prev = previous;
    current->next = NULL;
    current->prev = NULL;
    delete current;

  }



}

int main() {
  node* head = NULL;
  node* tail = NULL;
  insertAthead(head,tail,100);
  insertAthead(head,tail,50);
  insertAtTail(head,tail,500);
  insertAtTail(head,tail,600);
  insertAtpos(head,tail,2000,5);

print(head);
cout<<" "<<endl;
del(head,tail,5);
  print(head);


  return 0;
}