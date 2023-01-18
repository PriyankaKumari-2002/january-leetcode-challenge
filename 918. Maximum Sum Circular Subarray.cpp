class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total_sum = 0;
        int max_sum = INT_MIN;
        int min_sum = INT_MAX;
        int max_ending_indx = 0;
        int min_ending_indx = 0;
        
        for(auto x : nums)
        {
            total_sum += x;
            max_ending_indx = max(max_ending_indx + x, x);
            max_sum = max(max_sum, max_ending_indx);
            min_ending_indx = min(min_ending_indx +x, x);
            min_sum = min(min_sum, min_ending_indx);
        }
        if(max_sum > 0)
            return max(max_sum, total_sum - min_sum);
        else
            return max_sum;
        
    }
};
