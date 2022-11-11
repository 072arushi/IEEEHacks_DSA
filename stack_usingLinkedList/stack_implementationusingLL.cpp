#include <iostream>
using namespace std;
 
// creating a linked list;
class Node {
public:
    int data;
    Node* next;
   
    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
 
class Stack {
    Node* head;
    
 
public:
    Stack() { 
        head = NULL;
        
         }
 
    void push(int data)
    {
 
        // Create new node and allocate memory in heap
        Node* newNode = new Node(data);
 
        // Check if stack (heap) is full.
        // Then inserting an element would
        // lead to stack overflow
        if (!newNode) {
            cout << "\nStack Overflow";
            exit(1);
        }
 
        // Initialize data into newNode data field
        newNode->data = data;
 
        // Put head pointer reference into newNode next pointer
        newNode->next = head;
 
        // Make newNode as head of Stack
        head = newNode;
    }
 
    // Utility function to check if
    // the stack is empty or not
    bool isEmpty()
    {
        // If head is NULL it means that
        // there are no elements are in stack
        return head == NULL;
    }
 
    // Utility function to return top element in a stack
    int peek()
    {
        // If stack is not empty , return the top element
        if (!isEmpty())
            return head->data;
        else
            exit(1);
    }
 
    // Function to remove
    // a key from given queue q
    void pop()
    {
        Node* temp;
 
        // Check for stack underflow
        if (head == NULL) {
            cout << "\nStack Underflow" << endl;
            exit(1);
        }
        else {
 
            // Assign head to temp
            temp = head;
 
            // Assign second node to head
            head = head->next;
 
            // This will automatically destroy
            // the link between first node and second node
 
            // Release memory of head node
            // i.e delete the node
            free(temp);
        }
    }
 
    // Function to print all the
    // elements of the stack
    void display()
    {
        Node* temp;
 
        // Check for stack underflow
        if (head == NULL) {
            cout << "\nStack Underflow";
            exit(1);
        }
        else {
            temp = head;
            while (temp != NULL) {
 
                // Print node data
                cout << temp->data;
 
                // Assign temp next to temp
                temp = temp->next;
                if (temp != NULL)
                    cout << " -> ";
            }
        }
    }
};
 
// Driven Program
int main()
{
    // Creating a stack
    Stack s;
 
    // Push the elements of stack
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
 
    // Display stack elements
    s.display();
 
    // Print top element of stack
    cout << "\nTop element is " << s.peek() << endl;
 
    // Delete top elements of stack
    s.pop();
    s.pop();
 
    // Display stack elements
    s.display();
 
    // Print top element of stack
    cout << "\nTop element is " << s.peek() << endl;
 
    return 0;
}
