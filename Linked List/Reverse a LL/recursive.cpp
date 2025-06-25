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

    ListNode* reverseUsingRecursion(ListNode* prev, ListNode* curr){
        //Base Case
        if(curr == NULL){
            return prev;
        }
        ListNode* nextNode = curr -> next;
        curr -> next = prev;
        return reverseUsingRecursion(curr,nextNode);
    }


    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        return reverseUsingRecursion(prev, curr);
    }
};