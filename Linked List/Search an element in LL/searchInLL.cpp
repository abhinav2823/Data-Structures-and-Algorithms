/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution {
  public:
    bool searchKey(int n, Node* head, int key) {
        Node* temp = head;
        while(temp != NULL){
            if(temp->data == key){
                return true;
            }
            temp = temp->next;
        }
        return false;
        
    }
};
