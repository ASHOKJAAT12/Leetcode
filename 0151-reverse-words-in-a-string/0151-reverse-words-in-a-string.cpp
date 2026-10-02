class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i = 0;
        int count = 0;
        string str = "";
        vector<string> res;
        for ( i = 0 ; i < n ; i++ ) {
            if ( s[i] == ' ' ) {
                count++;
            } else {
                break;
            }
        }
        i = 0;
        while ( count < n ) {
            if (s[count] == ' ') {
                if (str != "") {
                    res.push_back(str);
                    str = "";
                }
                count++;
            } else {
                str.push_back(s[count]);
                count++;
            }
        }
        if (str != "") {
           res.push_back(str); 
        }
        string fin = "";
        for ( i = res.size()-1 ; i >= 0 ; i-- ) {
            fin += res[i];
            if (i != 0) {
                fin += ' ';
            }
        }
        return fin;
    }
};