/*
Structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node *left, *right;
};
*/
// your task is to complete this function
class Solution {
  public:
  
    int computeKthAncestor(Node* root, int& count, int node, int& val){
        if(root == NULL) return 0;
        
        if(root->data == node){
            return 1;
        }
        
        int leftAns = computeKthAncestor(root->left, count, node, val);
        int rightAns = computeKthAncestor(root->right, count, node, val);
        
        if(leftAns || rightAns){
            count--;
            if(count == 0){
                val = root->data;
            }
            return 1;
        }
        
       return 0;
    }
  
  
    int kthAncestor(Node *root, int k, int node) {
        int count = k;
        int val = -1;
        int ans = computeKthAncestor(root, count, node, val);
        return val;
    }
};
