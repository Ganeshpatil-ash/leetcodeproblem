#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> lastIndex;  // value -> last index

        for (int i = 0; i < nums.size(); i++) {
            // if number seen before
            if (lastIndex.count(nums[i])) {
                // check distance
                if (i - lastIndex[nums[i]] <= k) {
                    return true;
                }
            }

            // update latest index
            lastIndex[nums[i]] = i;
        }
        return false;
    }
};
