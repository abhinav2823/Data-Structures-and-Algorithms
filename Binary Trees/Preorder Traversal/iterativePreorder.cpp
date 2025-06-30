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

    void computePreorder(vector<int>& preOrder, TreeNode* root){
        if(!root) return;
        stack<TreeNode*> st;
        st.push(root);

        while(!st.empty()){
            TreeNode* topElement = st.top();
            st.pop();
            preOrder.push_back(topElement->val);
            if(topElement->right) st.push(topElement->right);
            if(topElement->left) st.push(topElement->left);
        }
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preOrder;
        computePreorder(preOrder, root);
        return preOrder;
    }
};