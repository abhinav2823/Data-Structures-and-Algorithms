/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
  
    int findMinTime(map<Node*, Node*>& mpp, Node* targetNode){
        queue<Node*> q;
        q.push(targetNode);
        map<Node*, int> vis;
        vis[targetNode] = 1;
        int minTime = 0;
        
        while(!q.empty()){
            int size = q.size();
            int flag = 0;
            for(int i = 0; i < size; i++){
                auto node = q.front();
                q.pop();
                if(node->left && !vis[node->left]){
                    flag = 1;
                    vis[node->left] = 1;
                    q.push(node->left);
                }
                if(node->right && !vis[node->right]){
                    flag = 1;
                    vis[node->right] = 1;
                    q.push(node->right);
                }
                if(mpp[node] && !vis[mpp[node]]){
                    flag = 1;
                    vis[mpp[node]] = 1;
                    q.push(mpp[node]);
                }
            }
             if(flag) minTime++;
        }
        return minTime;
    }
  
    Node* bfsToParentMap(Node* root, map<Node*, Node*>& mpp, int target){
        queue<Node*> q;
        q.push(root);
        Node* res;
        while(!q.empty()){
            Node* frontNode = q.front();
            if(frontNode->data == target) res = frontNode;
            q.pop();
            if(frontNode->left){
                mpp[frontNode->left] = frontNode;
                q.push(frontNode->left);
            }
            if(frontNode->right){
                mpp[frontNode->right] = frontNode;
                q.push(frontNode->right);
            }
        }
        
        return res;
    }
  
    int minTime(Node* root, int target) {
        map<Node*, Node*> mpp;
        Node* targetNode = bfsToParentMap(root, mpp, target);
        int time = findMinTime(mpp, targetNode);
        return time;
        
        
    }
};