class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
        for ( int i = 0 ; i < s.size() ; i++ ) {
            if ( isalnum(s[i])) {
                ans.push_back(tolower(s[i]));
               
            }
        }
        int n = ans.size();
        for ( int  i = 0 ; i < n/2 ; i++ ) {
            if ( ans[i] != ans[n-i-1]) {
                return false;
            }
        }
        return true;

    }
};