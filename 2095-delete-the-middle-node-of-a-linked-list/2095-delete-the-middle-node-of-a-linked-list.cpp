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
    ListNode* deleteMiddle(ListNode* head) {
        if ( head == NULL || head->next == NULL ) {
            return NULL;
        }
        ListNode* temp = head;
        ListNode* prev = NULL;
        int count = 0;
        while( temp != NULL ) {
            temp = temp->next;
            count++;
        }
        temp = head;
        count /= 2;
        for ( int i = 0 ; i <  count ; i++ ) {
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        temp = temp->next;
        return head;
    }
};