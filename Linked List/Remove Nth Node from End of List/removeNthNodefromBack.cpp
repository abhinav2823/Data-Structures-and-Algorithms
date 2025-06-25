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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow = head;
        ListNode* fast = head;

        // Make the fast pointer N nodes ahead of slow pointer
        for(int i = 0; i < n; i++){
            fast = fast -> next;
        }

        // if fast becomes NULL means we need to delete the head node
        if(fast == NULL){
            return head -> next;
        }

        //Now move both pointers one step at a time until fast reaches the last node
        while(fast -> next != NULL){
            fast = fast -> next;
            slow = slow -> next;
        }

        ListNode* nextNode = slow -> next;
        slow -> next = nextNode -> next;
        nextNode -> next = NULL;
        delete nextNode;
        return head;



    }
};