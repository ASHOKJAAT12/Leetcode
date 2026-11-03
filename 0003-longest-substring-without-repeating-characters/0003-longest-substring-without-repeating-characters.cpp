class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_set<char> res;

        int left = 0;
        int maxLen = 0;

        for (int right = 0; right < s.size(); right++) {

            while (res.count(s[right])) {
                res.erase(s[left]);
                left++;
            }

            res.insert(s[right]);

            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};