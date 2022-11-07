#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};

Node* buildTree(Node* root){
    int data;
    cin >> data;
    root = new Node(data);

    if (data == -1){
        return NULL;
    }
    root->left = buildTree(root->left);
    root->right = buildTree(root->right);

    return root;

}

void levelOrderTraversal(Node* root){
    queue<Node*> q;

    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if (temp == NULL){
            cout << endl;
            if (!q.empty()){
                q.push(NULL);
            }
        }
        else {
            cout << temp->data << " ";
            if (temp -> left != NULL){
                q.push(temp->left);
            }
            if (temp->right != NULL){
                q.push(temp -> right);
            }
        }
    }
}

int main(){
    Node* root = NULL;
    root = buildTree(root);
    levelOrderTraversal(root);

}