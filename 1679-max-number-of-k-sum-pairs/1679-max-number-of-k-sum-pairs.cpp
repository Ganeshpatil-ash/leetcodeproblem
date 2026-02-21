#include <vector>
#include <unordered_map>

class Solution {
public:
    int maxOperations(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> countMap;
        int pairs = 0;
        
        for (int num : nums) {
            int complement = k - num;
            
            // If the complement is already seen and available
            if (countMap[complement] > 0) {
                pairs++;
                countMap[complement]--;  // Use one occurrence of the complement
            } else {
                countMap[num]++;  // Store this number for future pairing
            }
        }
        
        return pairs;
    }
};