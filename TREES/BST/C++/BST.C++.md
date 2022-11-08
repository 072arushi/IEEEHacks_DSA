**<<<<<<<<<<<<<------PRACTICE LINK------------>>>>>>>>>>>>>>**
</br>
<https://leetcode.com/problems/convert-bst-to-greater-tree/>

Given the root of a Binary Search Tree (BST), convert it to a Greater Tree such that every key of the original BST is changed to the original key plus the sum of all keys greater than the original key in BST.
</br>
As a reminder, a binary search tree is a tree that satisfies these constraints:
</br>
-->>>The left subtree of a node contains only nodes with keys less than the node's key.
</br>
--->>The right subtree of a node contains only nodes with keys greater than the node's key.
</br>
-->>>Both the left and right subtrees must also be binary search trees.
 
</br>
Example 1:
</br>
Input: root = [4,1,6,0,2,5,7,null,null,null,3,null,null,null,8]
</br>
Output: [30,36,21,36,35,26,15,null,null,null,33,null,null,null,8]


</br>
Example 2:
</br>
Input: root = [0,null,1]
</br>
Output: [1,null,1]
 

Constraints:

The number of nodes in the tree is in the range [0, 104].
-104 <= Node.val <= 104
</br>
All the values in the tree are unique.
root is guaranteed to be a valid binary search tree.
 
 
**<<<<<<<<<<---------- CODE---------->>>>>>>>**
</br>
</br>
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 </br>
 </br>
 </br>
class Solution {
</br>
public:
</br>
    int sum=0;
    </br>
    void r(TreeNode* root){
    
        if(root == NULL){         //BASE CASE
            return;
        }
        if(root->right!=NULL)
        r(root->right);
        
        sum = sum+root->val;
        root->val = sum;
        if(root->left!=NULL)
            r(root->left);
        
        
    }
    
    TreeNode* convertBST(TreeNode* root) {
        if(root==NULL){                 //BASE CASE
            return root;
        }
        
        r(root->right);
        sum = sum + root->val;
        root->val = sum;
        r(root->left);
        return root;
    }
};
