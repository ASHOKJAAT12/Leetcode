class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int maxi = 0;
        while ( i < j ) {
            int mini = (j-i)* min(height[i],height[j]);
            if ( mini > maxi ) {
                maxi = mini;
            }
            if ( height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }
        return maxi;
    }
};