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

    ListNode* middleNode(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast -> next != NULL){
            fast = fast -> next;
            if(fast -> next != NULL){
                fast = fast -> next;
                slow = slow -> next;
            }
        }

        return slow;
    }

    ListNode* merge(ListNode* leftHead, ListNode* rightHead){
        ListNode* temp1 = leftHead;
        ListNode* temp2 = rightHead;
        ListNode* dNode = new ListNode(-1);
        ListNode* temp = dNode;

        while(temp1 != NULL && temp2 != NULL){
            if(temp1->val <= temp2->val){
                temp -> next = temp1;
                temp = temp1;
                temp1 = temp1 -> next;
            }
            else{
                temp -> next = temp2;
                temp = temp2;
                temp2 = temp2 -> next;
            }
        }

        if(temp1 != NULL) temp -> next = temp1;
        if(temp2 != NULL) temp -> next = temp2;

        return dNode->next;
    }


    ListNode* sortList(ListNode* head) {
        if(head == NULL || head -> next == NULL){
            return head;
        }
        ListNode* middle = middleNode(head);
        ListNode* leftHead = head;
        ListNode* rightHead = middle -> next;
        middle -> next = NULL;
        leftHead = sortList(leftHead);
        rightHead = sortList(rightHead);
        return merge(leftHead, rightHead);
    }
};