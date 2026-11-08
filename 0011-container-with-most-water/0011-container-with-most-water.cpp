class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0; 
        int right = n-1;
        int maxA = 0;
        int totalheight = 0;
        while(left < right){
            int width = right - left;
            int minheight = min(height[left],height[right]);
            totalheight = width*minheight;
            maxA = max(maxA,totalheight);
            
            if (height[left] < height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxA;
    }
};