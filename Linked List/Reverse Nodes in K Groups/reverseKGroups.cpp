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

    void reverseLL(ListNode* temp){
        ListNode* prev = NULL;
        ListNode* curr = temp;
        while(curr != NULL){
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
    }

    ListNode* findKthNode(ListNode* temp, int k){
        k--;
        while(temp != NULL && k > 0){
            k--;
            temp = temp->next;
        }

        return temp;
    }


    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevLast = NULL;
        while(temp != NULL){
            ListNode* kthNode = findKthNode(temp, k);
            if(kthNode == NULL){
                if(prevLast != NULL) prevLast->next = temp;
                break;
            }

            ListNode* nextNode = kthNode->next;
            kthNode->next = NULL;
            reverseLL(temp);
            if(temp == head){
                head = kthNode;
            }
            else{
                prevLast->next = kthNode;
            }

            prevLast = temp;
            temp = nextNode;
        }

        return head;
    }
};