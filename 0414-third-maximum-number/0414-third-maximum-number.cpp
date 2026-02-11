class Solution {
public:
    int thirdMax(vector<int>& nums) {

        // sort the array
        sort(nums.begin(), nums.end());

        int n = nums.size();

        // if size < 3 → return max
        if (n < 3) {
            return nums[n-1];
        }

        int count = 1;          // we already have max
        int i = n - 1;
        int third_max = nums[n-1];

        // traverse from end
        while (i > 0) {
            if (nums[i] != nums[i-1]) {   // distinct number found
                count++;
                third_max = nums[i-1];
            }

            if (count == 3) {
                return third_max;
            }

            i--;
        }

        // if less than 3 distinct → return max
        return nums[n-1];
    }
};
