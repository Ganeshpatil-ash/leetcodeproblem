class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int i = 0; int j = n-1;
        int p = n-1;
        vector<int> pos(n);
        while(i <= j){
            if (abs(nums[i]) > abs(nums[j])){
                pos[p] = nums[i]*nums[i];
                i++;
            }
            else {
                pos[p] = nums[j]*nums[j];
                j--;
            }
            p--;

        }
        return pos;
    }
};