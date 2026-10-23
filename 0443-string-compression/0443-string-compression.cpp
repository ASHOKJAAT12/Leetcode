class Solution {
public:
    int compress(vector<char>& chars) {
        string s = "";
        int n = chars.size();
        int i = 0;

        while (i < n) {
            char ch = chars[i];
            int count = 0;

            while (i < n && chars[i] == ch) {
                count++;
                i++;
            }

            s.push_back(ch);

            if (count > 1) {
                s += to_string(count);
            }
        }

        chars.assign(s.begin(), s.end());

        return chars.size();
    }
};