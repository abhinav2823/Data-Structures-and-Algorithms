/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    ListNode* getMiddleNode(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL){
            fast = fast -> next;
            if(fast != NULL){
                fast = fast -> next;
                slow = slow -> next;
            }
        }

        return slow;
    }

    ListNode* deleteMiddle(ListNode* head) {
        ListNode* middleNode = getMiddleNode(head);
        ListNode* temp = head;
        if(temp -> next == NULL){
            return NULL;
        }
        while(temp -> next != middleNode){
            temp = temp -> next;
        }

        temp -> next = middleNode -> next;
        middleNode -> next = NULL;
        delete middleNode;

        return head;
    }
};