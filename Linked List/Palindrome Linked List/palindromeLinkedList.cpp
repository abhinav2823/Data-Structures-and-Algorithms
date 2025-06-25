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

    ListNode* middleOfLL(ListNode* head){
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

    ListNode* reverseLL(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr != NULL){
            ListNode* nextNode = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = nextNode;
        }

        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if(head == NULL || head -> next == NULL){
            return true;
        }


        ListNode* middle = middleOfLL(head);
        ListNode* secondHead = middle -> next;
        middle -> next = NULL;
        ListNode* temp1 = head;
        ListNode* temp2 = reverseLL(secondHead);

        while(temp2 != NULL){
            if(temp1 -> val != temp2 -> val){
                return false;
            }
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }

        return true;

    }
};