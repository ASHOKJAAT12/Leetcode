/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    TreeNode* head = NULL;
    TreeNode* findvalue ( TreeNode* root , int val ) {
        if ( root != NULL ) {
            if ( root->val == val ) {
                head = root;
            }
        }
        if ( root->left != NULL ) {
            findvalue(root->left,val);
        }
        if ( root->right != NULL ) {
            findvalue(root->right,val);
        }
        return head;
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        return findvalue(root,val);
    }
};