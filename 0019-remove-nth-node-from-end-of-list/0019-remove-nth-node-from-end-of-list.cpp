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
        if ( head == NULL){
            return NULL;
        }
        ListNode* temp = head;
        ListNode* nexter = head->next;
        int count = 0;
        while(temp != NULL) {
            count++;
            temp = temp->next;
        }
        count = count - n;
        if ( count == 0) {
            return head->next;
        }
        temp = head;
        for ( int i = 0 ; i < count-1 ; i++){
            temp = temp->next;
            nexter = temp->next;
        }
        temp->next = nexter->next;
        return head;
    }
};