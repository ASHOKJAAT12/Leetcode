class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool> result(n,false);
        int high = 0;
        for( int i = 0 ; i < n ; i++ ) {
            if ( candies[i] > high ) {
                high = candies[i];
            }
        }

        for ( int i = 0 ; i < n ; i++ ) {
            if ( candies[i] + extraCandies >= high ) {
                result[i] = true;
            }
            else {
                result[i]=false;
            }
        }
        return result;
    }
};