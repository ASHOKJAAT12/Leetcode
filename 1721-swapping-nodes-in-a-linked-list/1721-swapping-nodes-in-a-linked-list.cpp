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
    ListNode* swapNodes(ListNode* head, int k) {
        if ( head == NULL ) {
            return NULL;
        }
        ListNode* temp = head;
        ListNode* curr = head;
        int t = 0;
        int count = 0;

        while ( temp != NULL ) {
            if ( count < k-1){
                curr = curr->next;
            }
            temp = temp->next;
            count++;
        }
        temp = head;
        count -= k;
        for ( int i = 0 ; i < count ; i++ ) {
            temp = temp->next;
        }

        t = curr->val;
        curr->val = temp->val;
        temp->val = t;
        return head;
        
        

    }
};