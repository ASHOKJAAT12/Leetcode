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
                    if ( tolower(s[left]) == 'a' || tolower(s[left]) == 'e' ||
    tolower(s[left]) == 'i' || tolower(s[left]) == 'o' ||
    tolower(s[left]) == 'u' ){
                        le = true;
                    }else {
                        left++;
                    }
                }
                if ( re != true ) {
                    
                    if ( tolower(s[right]) == 'a' || tolower(s[right]) == 'e' ||
    tolower(s[right]) == 'i' || tolower(s[right]) == 'o' ||
    tolower(s[right]) == 'u'){
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