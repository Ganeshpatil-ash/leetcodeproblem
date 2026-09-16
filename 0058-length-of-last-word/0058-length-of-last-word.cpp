class Solution {
public:
    int lengthOfLastWord(string s) {
        int left = s.size() - 1;
        int count = 0;

        // Skip spaces at the end
        while (left >= 0 && s[left] == ' ') {
            left--;
        }

        // Count the last word
        while (left >= 0 && s[left] != ' ') {
            count++;
            left--;
        }

        return count;
    }
};