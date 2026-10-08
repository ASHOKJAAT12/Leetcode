#include <stack>
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> res;
        for ( int i = 0 ; i < asteroids.size() ; i++ ) {
            if ( asteroids[i] > 0) {
                res.push(asteroids[i]);
            } else {
                while( !res.empty() && res.top() > 0 && res.top() < -asteroids[i] ) {
                    res.pop();
                }
                if ( res.empty() || res.top() < 0 ) {
                    res.push(asteroids[i]);
                } 
                if ( !res.empty() && res.top() == -asteroids[i] ) {
                    res.pop();
                }
            }
        }
        vector<int> ans(res.size());
        int n = res.size()-1;
        while( !res.empty() ) {
            ans[n--] = res.top();
            res.pop();
        }
        return ans;
        
    }
};