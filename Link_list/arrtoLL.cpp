#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
};

void PrintList(Node *&head) {
  if (head == NULL) {
    cout << "Empty";
  } else {
    Node *temp = head;
    while (temp != NULL) {
      cout << temp->data << "->";
      temp = temp->next;
    }
  }
  cout << endl;  // Add this line to print a new line at the end
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

 int main() {
  int arr[] = {1, 2, 3, 4, 5};
  Node *head = NULL;
  Node *tail = NULL;

  // Creating a linked list from the array elements
  for (int i = 0; i <=4; i++) {
    insertAtTail(head, tail, arr[i]);
  }

  PrintList(head);

  return 0;
}

