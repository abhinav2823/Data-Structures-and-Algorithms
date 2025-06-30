void preInPostTraversal(vector<int>& preOrder,vector<int>& inOrder, vector<int>& postOrder, Node* root){
    stack<pair<Node*, int>> st;
    st.push({root, 1});
    if(root == NULL) return;

    while(!st.empty()){
        auto it = st.top();
        st.pop();

        // this is part of pre
        // increment 1 to 2 and push the left side of the tree
        if(it.second == 1){
            preOrder.push_back(it.first->data);
            it.second++;
            st.push(it);

            if(it.first->left != NULL) st.push({it.first->left, 1});
        }

        // this is part of inOrder
        // increment 2 to 3 and push right 
        else if(it.second == 2){
            inOrder.push_back(it.first->data);
            it.second++;
            st.push(it);

            if(it.first->right != NULL){
                st.push({it.first->right,1});
            }
        }
        else{
            postOrder.push_back(it.first->data);
        }
    }
}
