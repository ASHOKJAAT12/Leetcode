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
    int pairSum(ListNode* head) {
        if ( head == NULL & head->next == NULL ) {
            return NULL;
        }

        vector<int> res;
        while( head != NULL ) {
            res.push_back(head->val);
            head = head->next;
        }
        int sum = 0;
        int n = res.size()-1;
        for ( int i = 0 ; i <= res.size()/2-1 ; i++ ){
            int num = res[i]+res[n-i];
            if ( num > sum ) {
                sum = num;
            }
        }
        return sum;
    }
};