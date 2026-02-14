class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        vector <int> mp;

        for (int x : nums){
            sum += x;
            mp.push_back(sum);
        }
        return mp;
    }
};