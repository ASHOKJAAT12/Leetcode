
class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i = 0, j = 0;

        while (i < n) {
            char ch = chars[i];
            int count = 0;

            while (i < n && chars[i] == ch) {
                count++;
                i++;
            }

            chars[j++] = ch;

            if (count > 1) {
                int start = j;
                while (count > 0) {
                    chars[j++] = '0' + count % 10;
                    count /= 10;
                }

                // Reverse the digits in place
                int end = j - 1;
                while (start < end) {
                    char temp = chars[start];
                    chars[start] = chars[end];
                    chars[end] = temp;
                    start++;
                    end--;
                }
            }
        }

        return j;
    }
};
