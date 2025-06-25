/*
class DLLNode {
  public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/
class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        DLLNode* temp = head;
        while(temp != NULL){
            swap(temp -> next, temp -> prev);
            head = temp;
            temp =  temp -> prev;
        }
        
        return head;
        
    }
};