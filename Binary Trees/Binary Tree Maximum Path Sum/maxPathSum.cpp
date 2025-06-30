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

    int maxSumPath(TreeNode* root, int &maxSum){
        if(root == NULL) return 0;
        int left = max(0, maxSumPath(root->left, maxSum));
        int right = max(0, maxSumPath(root->right, maxSum));
        maxSum = max(maxSum, root->val + left + right);

        return max(left,right) + root->val;
    }

    int maxPathSum(TreeNode* root) {
        int maxSum = INT_MIN;
        maxSumPath(root, maxSum);
        return maxSum;
    }
};