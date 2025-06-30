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

    void findPaths(TreeNode* root, int targetSum, vector<vector<int>>& paths, vector<int> path, int sum){
        if(root == NULL) return;
        sum += root->val;
        path.push_back(root->val);
        if(root->left == NULL && root->right == NULL){
            if(sum == targetSum){
                paths.push_back(path);
            }
            else return;
        }

        findPaths(root->left, targetSum, paths,path,sum);
        findPaths(root->right, targetSum, paths,path,sum);
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> paths;
        vector<int> path;
        int sum = 0;
        findPaths(root, targetSum, paths, path, sum);
        return paths;
    }
};