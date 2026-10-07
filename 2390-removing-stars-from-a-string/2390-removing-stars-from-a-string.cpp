#include <iostream>
#include <stack>
class Solution {
public:
    string removeStars(string s) {
        stack<char> res;
        for ( int i = 0 ; i < s.size() ; i++ ) {
            if ( s[i] == '*' ) {
                res.pop();
            } else {
                res.push(s[i]);
            }
        }
        string r = "";
        while ( !res.empty() ) {
            r.push_back(res.top());
            res.pop();
        }
        reverse(r.begin(),r.end());
        return r;
    }
};