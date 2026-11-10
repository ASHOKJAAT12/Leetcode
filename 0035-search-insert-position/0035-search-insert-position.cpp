class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        if ( target > nums[n-1]) {
            return n;
        }
        for ( int i = 0 ; i < n ; i++ ) {
            if ( nums[i] == target ) {
                return i;
            } 
            if ( i+1 < n && nums[i] < target && nums[i+1] > target) {
                return i+1;
            }
        }
        return 0;
    }
};