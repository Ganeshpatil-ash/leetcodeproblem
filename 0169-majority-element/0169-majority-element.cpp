class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size();
        for(int x : nums) {
           mp[x]++;

        }
        for (auto ans : mp){
            if(ans.second > n/2){
                return ans.first;
            }
        }
        return -1;
    }
};