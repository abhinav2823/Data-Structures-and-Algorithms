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
    ListNode* oddEvenList(ListNode* head) {
        // Empty or single element case
        if(head == NULL || head -> next == NULL){
            return head;
        }

        ListNode* odd = head;
        ListNode* even = head -> next;
        ListNode* evenHead = even;

        while(even != NULL && even->next != NULL){
            odd -> next = even -> next;
            odd = odd -> next;
            even -> next = even -> next -> next;
            even = even -> next;
        }

        //Connecting odd list to even list
        odd -> next = evenHead;
        return head;
    }
};