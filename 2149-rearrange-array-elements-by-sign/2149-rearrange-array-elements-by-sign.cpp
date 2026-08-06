class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int index = 1;
        int pos = 0;
        for (int i = 0; i < n; i++){
            if(nums[i] < 0){                    
                ans[index] = nums[i];
                index +=2;
            }
            else{
                ans[pos] = nums[i];
                pos += 2;
            }
        }
        return ans;
    }
};