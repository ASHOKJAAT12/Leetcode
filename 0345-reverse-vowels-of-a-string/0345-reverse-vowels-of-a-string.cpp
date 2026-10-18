class Solution {
public:
    string reverseVowels(string s) {
        int left = 0;
        int right = s.size()-1;
        bool le = false;
        bool re = false;
        while ( left < right ) {
            if ( le == true && re == true ) {
                char temp = s[left];
                s[left] = s[right];
                s[right] = temp;
                le = false;
                re = false;
                left++;
                right--;
            } else {
                if ( le != true ) {
                    if ( s[left] == 'a' || s[left] == 'e'|| s[left] == 'i' || s[left] == 'o' || s[left] == 'u' || s[left] == 'A' || s[left] == 'E'|| s[left] == 'I' || s[left] == 'O' || s[left] == 'U'){
                        le = true;
                    }else {
                        left++;
                    }
                }
                if ( re != true ) {
                    
                    if ( s[right] == 'a' || s[right] == 'e'|| s[right] == 'i' || s[right] == 'o' || s[right] == 'u' || s[right] == 'A' || s[right] == 'E'|| s[right] == 'I' || s[right] == 'O' || s[right] == 'U'){
                        re = true;
                    }else{
                        right--;
                    }
                }
            }


        }
        return s;
    }
};