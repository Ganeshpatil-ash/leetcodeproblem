class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;

        vector<int> temp(k);

        // step 1: store last k elements
        for (int i = 0; i < k; i++) {
            temp[i] = nums[n - k + i];
        }

        // step 2: shift remaining to the right
        for (int i = n - k - 1; i >= 0; i--) {
            nums[i + k] = nums[i];
        }

        // step 3: put temp elements at front
        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }
    }
};
