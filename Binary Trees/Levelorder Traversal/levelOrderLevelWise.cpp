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

    void computeLevelOrder(vector<vector<int>>& lvlOrder, TreeNode* root){
        if(!root) return;
        
        vector<int> level;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);

        while(!q.empty()){
            TreeNode* frontNode = q.front();
            q.pop();

            if(frontNode == NULL){
                lvlOrder.push_back(level);
                level.clear();

                if(!q.empty()){
                    q.push(NULL);
                }
            }   
            else{
                level.push_back(frontNode -> val);
                if(frontNode->left) q.push(frontNode->left);
                if(frontNode->right) q.push(frontNode->right);
            }

        }
    }


    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> lvlOrder;
        computeLevelOrder(lvlOrder, root);
        return lvlOrder;
    }
};