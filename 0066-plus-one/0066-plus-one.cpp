class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        // start from last digit
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;      // no carry needed
                return digits;
            }
            digits[i] = 0;        // make 9 → 0 and carry
        }

        // if all were 9
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
