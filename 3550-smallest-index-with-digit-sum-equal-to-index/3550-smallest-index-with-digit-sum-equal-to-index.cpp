class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int num = -1;
        for ( int i = 0 ; i < nums.size() ; i++ ) {
            if ( nums[i] > 9 ) {
                int counter = 0;
                int number = nums[i];
                while(number != 0) {
                    int s = number % 10;
                    number /= 10;
                    counter = counter + s; 
                }
                if ( counter == i && ( i < num || num == -1)) {
                    num = i;
                }
            } else {
                if ( nums[i] == i && ( i < num || num == -1)) {
                    num = i;
                }
            }
        }
        return num;
    }
};