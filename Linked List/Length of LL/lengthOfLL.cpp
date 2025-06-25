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
    // Function to count nodes of a linked list.
    int getCount(struct Node* head) {
        int length = 0;
        Node* temp = head;
        while(temp != NULL){
            length++;
            temp = temp->next;
        }
        
        return length;
    }
};