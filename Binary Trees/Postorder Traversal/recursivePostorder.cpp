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
class Solution {
public:

    void computePostorder(vector<int>& postOrder, TreeNode* root){
        if(root == NULL) return;
        
        computePostorder(postOrder, root->left);
        computePostorder(postOrder, root->right);
        postOrder.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postOrder;
        computePostorder(postOrder, root);
        return postOrder;
    }
};