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
    int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;
        queue<pair<TreeNode*, long long>> q;
        q.push({root, 0});
        unsigned long long maxWidth = 0;

        while(!q.empty()){
            int n = q.size();
            unsigned long long frontIndex = q.front().second;
            unsigned long long backIndex = q.back().second;
            maxWidth = max(maxWidth, backIndex - frontIndex + 1);

            while(n--){
                TreeNode* curr = q.front().first;
                unsigned long long idx = q.front().second;
                q.pop();
                if(curr -> left){
                    q.push({curr->left, 2*idx+1});
                }
                if(curr -> right){
                    q.push({curr->right, 2*idx+2});
                }
            }
        }

        return maxWidth;
    }
};