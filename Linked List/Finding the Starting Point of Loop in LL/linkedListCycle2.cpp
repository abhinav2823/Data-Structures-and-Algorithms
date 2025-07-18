/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast != NULL){
            fast = fast -> next;
            if(fast != NULL){
                fast = fast -> next;
                slow = slow -> next;
            }

            if(slow == fast){
                break;
            }
        }

        if(fast == NULL){
            return fast;
        }

        slow = head;
        while(fast != slow){
            slow = slow -> next;
            fast = fast -> next;
        }

        return slow;
    }
};