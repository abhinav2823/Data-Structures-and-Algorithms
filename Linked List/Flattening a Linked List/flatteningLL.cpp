/* Node structure  used in the program

struct Node{
    int data;
    struct Node * next;
    struct Node * bottom;

    Node(int x){
        data = x;
        next = NULL;
        bottom = NULL;
    }

};
*/

class Solution {
  public:
  
    Node* merge(Node* list1, Node* list2){
        Node* dNode = new Node(-1);
        Node* res = dNode;
        
        while(list1 != NULL && list2 != NULL){
            if(list1->data <= list2->data){
                res->bottom = list1;
                res = list1;
                list1 = list1->bottom;
            }
            else{
                res->bottom = list2;
                res = list2;
                list2 = list2->bottom;
            }
            res->next = NULL;
        }
        
        if(list1) res->bottom = list1;
        else res->bottom = list2;
        if(dNode->bottom) dNode->bottom->next = NULL;
        
        return dNode->bottom;
    }
  
  
    // Function which returns the  root of the flattened linked list.
    Node *flatten(Node *root) {
        if(root == NULL || root->next == NULL){
            return root;
        }
        
        Node* mergedHead = flatten(root->next);
        root = merge(root, mergedHead);
        return root;
        
    }
};