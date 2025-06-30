/* A binary tree node

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
  
    void printLeftView(Node* root, int level, vector<int>& view){
        if(root == NULL){
            return;
        }
        
        if(level == view.size()){
            view.push_back(root->data);
        }
        
        printLeftView(root->left, level+1, view);
        printLeftView(root->right, level+1, view);
    }
  
  
    vector<int> leftView(Node *root) {
        int level = 0;
        vector<int> view;
        printLeftView(root, level, view);
        return view;
        
    }
};