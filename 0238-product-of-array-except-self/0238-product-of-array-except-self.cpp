class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zero = 0;
        int sum = 1;
        for ( int i = 0 ; i < nums.size() ; i++ ) {
            if ( nums[i] == 0 ) {
                zero++;
            } else {
                sum *= nums[i];
            }
        }
        if ( zero > 1 ) {
            vector<int> answer(nums.size());
            return answer;
        }
        vector<int> answer;
        if ( zero > 0 ) {
            for ( int i = 0 ; i < nums.size() ; i++ ) {
                if ( nums[i] != 0 ) {
                    answer.push_back(0);
                } else {
                    answer.push_back(sum);
                }
            }
        } else {
            for ( int i = 0 ; i < nums.size() ; i++ ) {
                int v = sum / nums[i];
                answer.push_back(v);
            }
        }
        return answer;
    }
};