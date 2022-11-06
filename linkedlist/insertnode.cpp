
#include<iostream>
using namespace std;
//make class name node make data and node next initially at NULL.
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
     this->data =data;
     next=NULL;
    }
};
//take input from user

Node *takeinput() {
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1) {
        Node *newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}


//  Insertion of new node 
Node *insertNode(Node *head ,int i , int data){

  Node *newnode = new Node(data);  

  //BASE CASE

  if(head==NULL){
    return head;

  }

  //Operation on small part
   if(i==0){

    newnode->next = head;
    head = newnode;
    return head;

  }

 // Recursion call on rest of the list
  Node *smallans = insertNode(head->next , i-1 , data);
  head->next = smallans;
  return head;
}

// print the output
void print(Node *head) {
    Node *temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << "\n";
}
//Main function 
int main() {
    int t;
    cin >> t;

    while (t--) {
        Node *head = takeinput();
        int pos, data;
        cin >> pos >> data;
        head = insertNode(head, pos, data);
        print(head);
    }
}
