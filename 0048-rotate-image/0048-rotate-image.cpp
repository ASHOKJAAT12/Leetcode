class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // Initialize an n x n matrix filled with 0s
        vector<vector<int>> res(n, vector<int>(n, 0)); 
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                res[i][j] = matrix[n - j - 1][i];
            }
        }
        
        // You can directly assign res back to matrix instead of looping again
        matrix = res; 
    }
};
