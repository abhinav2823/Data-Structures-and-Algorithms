#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int data){
            this -> data = data;
            this -> left = NULL;
            this -> right = NULL;
        }
};

// Node* createTree(){
//     cout << "Enter the value of node: ";
//     int data;
//     cin >> data;
//     if(data == -1){
//         return NULL;
//     }

//     Node* root = new Node(data);
//     root -> left = createTree();
//     root -> right = createTree();

//     return root;
// }

Node* buildTreefromLevelOrder(vector<int>& elements, int i){
    if(i >= elements.size()) return NULL;

    Node* root = new Node(elements[i]);

    //Left element is always at (2 * i + 1) index
    root -> left = buildTreefromLevelOrder(elements, 2 * i + 1); 

    //Right element is always at (2 * i + 2) index
    root -> right = buildTreefromLevelOrder(elements, 2 * i + 2);

    return root;
}

void preOrder(Node* root){
    if(root == NULL){
        return;
    }

    cout << root -> data << " ";;
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* root){
    if(root == NULL) return;

    inOrder(root->left);
    cout << root -> data << " ";
    inOrder(root->right);
}

void postOrder(Node* root){
    if(root == NULL) return;

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data <<" ";
}

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

void levelOrderLevelWise(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* frontNode = q.front();
        q.pop();

        if(frontNode == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << frontNode -> data <<" ";
            if(frontNode->left != NULL) q.push(frontNode->left);
            if(frontNode->right != NULL) q.push(frontNode->right);
        }
    }
}

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


void printArray(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}

int main(){
    vector<int> elements = {10,20,30,40,50,60,70};
    Node* root = buildTreefromLevelOrder(elements, 0);

    cout << "Preorder Traversal: ";
    preOrder(root);
    cout << endl;

    cout << "Inorder Traversal: ";
    inOrder(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    postOrder(root);
    cout << endl;

    cout << "Levelorder Traversal: ";
    levelOrder(root);
    cout << endl;
    cout << endl;


    cout << "Levelorder Traversal (Level Wise Printing): " << endl;
    levelOrderLevelWise(root);
    cout << endl;

    vector<int> preOrder;
    vector<int> inOrder;
    vector<int> postOrder;
    preInPostTraversal(preOrder,inOrder,postOrder,root);
    printArray(preOrder);
    cout<<endl;
    printArray(inOrder);
    cout<<endl;
    printArray(postOrder);
    cout<<endl;
}