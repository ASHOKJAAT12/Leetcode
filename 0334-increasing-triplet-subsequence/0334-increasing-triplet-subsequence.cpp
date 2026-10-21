class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int mn1=INT_MAX,mn2=INT_MAX;
        for (int x : nums) {
            if (x<=mn1) mn1 = x;
            else if (x<=mn2) mn2 = x; 
            else return true;
        }
        return false;
    }
};