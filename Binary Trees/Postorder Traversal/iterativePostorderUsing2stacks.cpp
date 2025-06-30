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

    void computePostorder(vector<int>& postOrder, TreeNode* root){
        if(root == NULL) return;
        stack<TreeNode*> st1;
        stack<TreeNode*> st2;
        st1.push(root);

        while(!st1.empty()){
            TreeNode* topNode = st1.top();
            st1.pop();
            st2.push(topNode);
            if(topNode->left) st1.push(topNode->left);
            if(topNode->right) st1.push(topNode->right);
        }

        while(!st2.empty()){
            postOrder.push_back(st2.top()->val);
            st2.pop();
        }

    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postOrder;
        computePostorder(postOrder, root);
        return postOrder;
    }
};