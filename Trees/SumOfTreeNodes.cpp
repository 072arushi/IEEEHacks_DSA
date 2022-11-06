// Sum Of Tree Nodes code

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

template <typename T>
class TreeNode {
   public:
    T data;
    vector<TreeNode<T>*> children;
// constructor
    TreeNode(T data) { this->data = data; }
// destructor
    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
};
// function declaration
int sumOfNodes(TreeNode<int>* root) {
    int sum= root->data;
//   recursive call in loop
    for(int i=0;i<root->children.size();i++){
        sum=sum+ sumOfNodes(root->children[i]);
    }
    return sum;    
}

// taking input 
TreeNode<int>* takeInputLevelWise() {
    int rootData;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++) {
            int childData;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

// main function
int main() {
    TreeNode<int>* root = takeInputLevelWise();
    cout << sumOfNodes(root);
}
