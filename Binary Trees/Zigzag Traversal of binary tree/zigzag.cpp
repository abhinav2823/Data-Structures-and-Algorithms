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

    void computeZigzagLevelOrder(TreeNode* root, vector<vector<int>>& zigzag){
        if(root ==  NULL) return;

        vector<int> levelElements;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        int level = 0;

        while(!q.empty()){
            TreeNode* frontNode = q.front();
            q.pop();

            if(frontNode == NULL){
                if(level % 2 == 0){
                    zigzag.push_back(levelElements);
                    levelElements.clear();
                    level++;
                }
                else{
                    reverse(levelElements.begin(), levelElements.end());
                    zigzag.push_back(levelElements);
                    levelElements.clear();
                    level++;
                }

                if(!q.empty()){
                    q.push(NULL);
                }
            }
            else{
                levelElements.push_back(frontNode->val);
                if(frontNode->left) q.push(frontNode->left);
                if(frontNode->right) q.push(frontNode->right);
            }
        }
    }

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> zigzag;
        computeZigzagLevelOrder(root, zigzag);
        return zigzag;
    }
};