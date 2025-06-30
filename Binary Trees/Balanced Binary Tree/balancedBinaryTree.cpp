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

    int heightTree(TreeNode* root){
        if(root == NULL) return 0;

        int leftHeight = heightTree(root->left);
        int rightHeight = heightTree(root->right);
        int height = max(leftHeight, rightHeight) + 1;
        return height;
    }

    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;

        int leftheight = heightTree(root->left);
        int rightheight = heightTree(root->right);
        int diff = abs(leftheight -  rightheight);
        bool isHeightBalanced = (diff <= 1);

        bool isLeftBalanced = isBalanced(root->left);
        bool isRightBalanced = isBalanced(root->right);

        return (isHeightBalanced && isLeftBalanced && isRightBalanced); 
    }
};