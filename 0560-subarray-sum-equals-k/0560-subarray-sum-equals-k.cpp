class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        long long sum = 0;
        int count = 0;
        unordered_map<long long,int> mp;

        mp[0] = 1;   // important

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            if (mp.find(sum - k) != mp.end()) {
                count += mp[sum - k];
            }

            mp[sum]++;
        }
        return count;
    }
};