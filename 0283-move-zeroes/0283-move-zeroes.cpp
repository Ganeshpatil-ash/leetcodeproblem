class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int k = 0;
        for (int j = 0; j < n; j++){
            if (nums[j] != 0){
                nums[k] = nums[j];
                k++;
            }
        }   
        while(k<n){
            nums[k] = 0;
            k++;
        }

    }
};