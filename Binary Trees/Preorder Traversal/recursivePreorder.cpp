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

    void computePreOrder(vector<int>& preOrder, TreeNode* root){
        if(root == NULL) return;

        preOrder.push_back(root->val);
        computePreOrder(preOrder, root->left);
        computePreOrder(preOrder, root->right);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preOrder;
        computePreOrder(preOrder, root);
        return preOrder;
    }
};