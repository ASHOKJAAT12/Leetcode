class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res1,res2;
        unordered_set<int> nums3(nums1.begin(),nums1.end());
        unordered_set<int> nums4(nums2.begin(),nums2.end());
        for ( int x : nums3 ) {
            if ( !nums4.count(x) ) {
                res1.push_back(x);
            }
        }
        for ( int x : nums4 ) {
            if ( !nums3.count(x) ) {
                res2.push_back(x);
            }
        }
        return {res1,res2};
    }
};