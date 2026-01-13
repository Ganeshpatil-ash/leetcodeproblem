class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int left = *min_element(nums.begin(), nums.end());
        int right = *max_element(nums.begin(), nums.end());

        while (left <= right) {
            int mid = left + (right - left) / 2;
            int count = 0;

            // Count numbers >= mid
            for (int x : nums) {
                if (x >= mid) count++;
            }

            if (count >= k)
                left = mid + 1;   // mid is possible, search higher
            else
                right = mid - 1;  // mid too large, search lower
        }

        return right; // right will be the k-th largest
    }
};
