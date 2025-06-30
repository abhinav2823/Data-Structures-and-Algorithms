
void levelOrder(Node* root){
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* frontNode = q.front();
        q.pop();

        cout << frontNode->data << " ";

        if(frontNode->left != NULL){
            q.push(frontNode->left);
        }
        
        if(frontNode->right != NULL){
            q.push(frontNode->right);
        }
    }

}