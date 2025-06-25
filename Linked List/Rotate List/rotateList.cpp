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

    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL){
            return head;
        }

        // finding the length of the linked list
        int length = 1;
        ListNode* temp = head;
        while(temp->next != NULL){
            length++;
            temp = temp->next;
        }

        // Linking the last element to the head
        temp->next = head;
        k = k % length;
        int end = length - k;

        while(end--){
            temp = temp->next;
        }

        head = temp->next;
        temp->next = NULL;

        return head;
    }
};