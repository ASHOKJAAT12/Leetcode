class Solution {
public:
    int maxVowels(string s, int k) {
      int maxi = 0;
      for ( int i = 0 ; i < k ; i++ ) {
        if ( s[i] == 'a' || s[i] == 'e'|| s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            maxi++;
        }
      }  
      int j = s.size();
      int i = k;
      int counter = maxi;
      for ( int i = 0 ; i < j-k ; i++ ) {
            if (s[i] == 'a' || s[i] == 'e'|| s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                counter--;
            }
            if (s[i+k] == 'a' || s[i+k] == 'e'|| s[i+k] == 'i' || s[i+k] == 'o' || s[i+k] == 'u') {
                counter++;
            }
            if ( counter > maxi ) {
                maxi = counter;
            }
      }
      return maxi;
    }
};