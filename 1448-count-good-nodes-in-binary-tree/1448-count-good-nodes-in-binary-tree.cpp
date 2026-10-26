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
    int goodNodes(TreeNode* root) {
        return dfs(root,root->val);
    }
private: 
    int dfs(TreeNode* node, int maxfar ) {
        if ( !node ) return 0;
        int count = 0;
        if ( node->val >= maxfar ) {
            count++;
        }
        maxfar = max(node->val,maxfar);
        count += dfs(node->left,maxfar);
        count += dfs(node->right,maxfar);
        return count;
    }
};