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
    
    
    int maxLevelSum(TreeNode* root) {
        if ( !root ) return 0;
        int sum = INT_MIN;
        int level = 1;
        int currentlevel = 1;
        queue<TreeNode*> q;
        q.push(root);
        while( !q.empty() ) {
            int n = q.size();
            int count = 0;
            for ( int i = 0 ; i < n ; i++ ) {
                TreeNode* current = q.front();
                q.pop();
                count += current->val;
                if ( current->left != NULL ) {
                    q.push(current->left);
                }
                if ( current->right != NULL ) {
                    q.push(current->right);
                }
            }

            if ( sum < count ) {
                sum = count;
                level = currentlevel;
            }
            currentlevel++;

        }
        return level;
    }
};