class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       if (k <= 0 || k > nums.size())

        return 0;

    int sum = 0;

    for (int i = 0; i < k; i++) {

        sum += nums[i];

    }

    double mmax = sum;

    for (int i = k; i < nums.size(); i++) {

        sum += nums[i] - nums[i - k];

    if (sum > mmax ) {mmax = sum;};

    }

    return mmax/k;
    }
};