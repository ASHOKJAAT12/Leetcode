class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<bool> ans(101,false);
        for ( int i = 0 ; i < nums.size() ; i++ ) {
            if ( nums[i] % k == 0 ) {
                int n = nums[i]/k;
                ans[n] = true;
            }
        }
        for ( int i = 1 ; i <= 101 ; i++ ) {
            if ( !ans[i] ) {
                return i*k;
            }
        }
        return 0;
    }
};