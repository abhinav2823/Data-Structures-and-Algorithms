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

    void flatten(TreeNode* root) {
        if(root == NULL) return;
        stack<TreeNode*> st;
        st.push(root);

        while(!st.empty()){
            TreeNode* topNode = st.top();
            st.pop();
            if(topNode->right){
                st.push(topNode->right);
            }
            if(topNode->left){
                st.push(topNode->left);
            }

            if(!st.empty()){
                topNode->right = st.top();
            }

            topNode->left = NULL;

        }
    }
};