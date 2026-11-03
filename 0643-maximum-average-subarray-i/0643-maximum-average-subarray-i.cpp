class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int size = nums.size();
        int currentsum = 0;
        for (int i = 0; i < k; i++){
            currentsum += nums[i];
        }

        int maxsum = currentsum;
        
        for (int i = k; i < size; i++){
            currentsum = currentsum + nums[i] - nums[i-k];

            maxsum = max(maxsum,currentsum);
        }

        return (double) maxsum/k;
    }
};