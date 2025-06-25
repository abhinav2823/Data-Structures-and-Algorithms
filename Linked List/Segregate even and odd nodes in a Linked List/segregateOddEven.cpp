// User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* divide(Node* head) {
        Node* oddHead = new Node(-1);
        Node* oddTail = oddHead;
        Node* evenHead = new Node(-1);
        Node* evenTail = evenHead;
        
        Node* curr = head;
        Node* temp;
        
        while(curr){
            temp = curr;
            curr = curr -> next;
            temp -> next = NULL;
            
            if(temp->data & 1){ //odd
                oddTail -> next = temp;
                oddTail = temp;
            } 
            else{
                evenTail -> next = temp;
                evenTail = temp;
            }
        }
        
        evenTail -> next = oddHead -> next;
        return evenHead -> next;
        
    }
};