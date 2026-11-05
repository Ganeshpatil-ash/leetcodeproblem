class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> o;
        int left = 0;
        int maxlength = INT_MIN;
        for (int right = 0; right < s.length(); right++){

            while(o.count(s[right])){
                o.erase(s[left]);
                left++;
            }
            o.insert(s[right]);
            
            maxlength = max(maxlength,(right-left+1));

        }
        if (maxlength == INT_MIN){
            return 0;
        }
        return maxlength;
    }
};