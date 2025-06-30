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
        stack<TreeNode*> st;
        TreeNode* curr = root;
        TreeNode* temp;

        while(curr != NULL || !st.empty()){
            if(curr != NULL){
                st.push(curr);
                curr = curr->left;
            }
            else{
                temp = st.top()->right;
                if(temp == NULL){
                    temp = st.top();
                    st.pop();
                    postOrder.push_back(temp->val);
                    while(!st.empty() && temp == st.top()->right){
                        temp = st.top();
                        st.pop();
                        postOrder.push_back(temp->val);
                    }
                }
                else{
                    curr = temp;
                }
            }
        }
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postOrder;
        computePostorder(postOrder, root);
        return postOrder;
    }
};