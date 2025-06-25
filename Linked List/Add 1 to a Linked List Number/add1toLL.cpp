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
  
    Node* reverseList(Node* head){
        Node* prev = NULL;
        Node* curr = head;
        
        while(curr != NULL){
            Node* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        
        return prev;
    }
  
    Node* addOne(Node* head) {
        head = reverseList(head);
        Node* temp = head;
        int carry = 1;
        
        while(temp->next != NULL){
            int totalSum = temp->data + carry;
            int digit = totalSum % 10;
            carry = totalSum/10;
            temp->data = digit;
            
            temp = temp->next;
            if(carry == 0){
                break;
            }
        }
        
        if(carry != 0){
            int totalSum = temp->data + carry;
            int digit = totalSum%10;
            carry = totalSum/10;
            temp -> data = digit;
            
            if(carry != 0){
                Node* newNode = new Node(carry);
                temp->next = newNode;
            }
        }
        
        head = reverseList(head);
        
        return head;
    }
};