/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    
    void leftBoundaryTraversal(Node* root, vector<int>& traversal){
        if(root == NULL) return;
        
        if(root->left == NULL && root->right == NULL){
            return;
        }
        traversal.push_back(root->data);
        if(root -> left != NULL){
            leftBoundaryTraversal(root->left, traversal);
        }
        else{
            leftBoundaryTraversal(root->right, traversal);
        }
    }
    
    void leafBoundaryTraversal(Node* root, vector<int>& traversal){
        if(root == NULL) return;
        
        leafBoundaryTraversal(root->left, traversal);
        if(root->left == NULL && root->right == NULL){
            traversal.push_back(root->data);
        }
        leafBoundaryTraversal(root->right, traversal);
    }
    
    void rightBoundaryTraversal(Node* root, vector<int>& traversal){
        if(root == NULL) return;
        stack<int>st;
        
        if(root->right == NULL && root->left == NULL){
            return;
        }
        st.push(root->data);
        if(root -> right != NULL){
            rightBoundaryTraversal(root->right, traversal);
        }
        else{
            rightBoundaryTraversal(root->left, traversal);
        }
        
        while(!st.empty()){
            traversal.push_back(st.top());
            st.pop();
        }
    }
  
  
    vector<int> boundaryTraversal(Node *root) {
        vector<int> traversal;
        if(root == NULL) return traversal;
        traversal.push_back(root->data);
        if(root->right != NULL || root->left != NULL){
            leftBoundaryTraversal(root->left, traversal);
            leafBoundaryTraversal(root, traversal);
            rightBoundaryTraversal(root->right, traversal);
        }
        return traversal;
        
    }
};