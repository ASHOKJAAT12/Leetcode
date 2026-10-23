class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> res;
        for ( int x : nums ) {
            if ( res.find(x) != res.end() ) {
                return true;
            }
            res.insert(x);
        }
        return false;
    }
};