/*

Definition for Binary Tree Node
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
    
    void findPath(Node* root, vector<int> path, vector<vector<int>>& paths){
        if(root == NULL) return;
        path.push_back(root->data);
        
        if(root->left == NULL && root->right == NULL){
            paths.push_back(path);
        }
        
        findPath(root->left, path, paths);
        findPath(root->right, path, paths);
    }
  
    vector<vector<int>> Paths(Node* root) {
        vector<vector<int>> paths;
        vector<int> path;
        findPath(root,path, paths);
        return paths;
    }
};