#include<math.h>
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minm = nums[0];
        int min_pos = 0;
        int max = nums[0];
        int max_pos = 0;
        int n = nums.size();
        for ( int  i = 1 ; i < n ; i++ ) {
            if ( minm > nums[i] ) {
                minm = nums[i];
                min_pos = i;
            }
            if ( max < nums[i] ) {
                max = nums[i];
                max_pos = i;
            }
        }

        if ( min_pos > max_pos ) {
            swap(min_pos,max_pos);
        }
         int left = max_pos + 1;
        int right = n - min_pos;
        int both = (min_pos + 1) + (n - max_pos);

        return min({left, right, both});
    }
};