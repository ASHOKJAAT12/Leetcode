class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int count = 0;
        bool isZero = false;

        for ( int i : nums ) {
            count ^= i;
            if ( count != 0 ) {
                isZero = true;
            }
        }

        if ( count != 0 ) {
            return nums.size();
        } 
        if ( isZero ) {
            return nums.size()-1;
        }
        return 0;
    }
};