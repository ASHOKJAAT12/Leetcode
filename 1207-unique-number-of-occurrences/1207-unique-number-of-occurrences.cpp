class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> res;
        for ( int x : arr ) {
            res[x]++;
        }
        unordered_set<int> ans;
        for ( auto x : res ) {
            ans.insert(x.second);
        }
        
        return ans.size() == res.size();
    }
};