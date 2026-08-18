class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        string name = "";
        if ( n <= m ) {
            int i =0;
            for ( i = 0 ; i < n ; i++ ) {
                name.push_back(word1[i]);
                name.push_back(word2[i]);
            }
            for ( i ; i < m ; i++ ) {
                name.push_back(word2[i]);
            }
            return name;

        } else {
            int i =0;
            for ( i = 0 ; i < m ; i++ ) {
                name.push_back(word1[i]);
                name.push_back(word2[i]);
            }
            for ( i ; i < n ; i++ ) {
                name.push_back(word1[i]);
            }
            return name;
        }
    }
};