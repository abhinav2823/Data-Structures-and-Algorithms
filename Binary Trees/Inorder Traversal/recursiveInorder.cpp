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

    void computeInorder(vector<int>& inOrder, TreeNode* root){
        if(root == NULL) return;

        computeInorder(inOrder, root->left);
        inOrder.push_back(root->val);
        computeInorder(inOrder,root->right);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> inOrder;
        computeInorder(inOrder, root);
        return inOrder;
    }
};