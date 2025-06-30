/*Complete the function below
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    
    int childrenSumProperty(Node* root){
        if(!root) return 1;

        if(!root->left && !root->right){
            return 1;
        }
        
        int childSum = 0;
        if(root->left) childSum += root->left->data;
        if(root->right) childSum += root->right->data;
        
        if(root->data != childSum) return 0;
        
        int left = 1, right = 1;
        if(root->left) left = childrenSumProperty(root->left);
        if(root->right) right = childrenSumProperty(root->right);
        
        return left && right;
    }
    
    int isSumProperty(Node *root) {
        return childrenSumProperty(root);
    }
};