class Solution {
public:
    int longestSubarray(vector<int>& nums) {
       int count = 0;
       int maxi = 0;
       int zero = 0;
       int n = nums.size();
       for ( int i = 0 ; i < n ; i++ ) {
            if ( nums[i] == 1 ) {
                count++;
            } else {
                zero++;
                if ( i+1 < n && nums[i+1] == 1 ) {
                    int j = i+1;
                    while( j < n && nums[j] == 1 ) {
                        count++;
                        j++;
                    }
                    
                }
                maxi = max(maxi,count);
                count = 0;
            }
       } 
       if ( zero == 0 ) {
        return count-1;
       }
       return maxi;
    }
};