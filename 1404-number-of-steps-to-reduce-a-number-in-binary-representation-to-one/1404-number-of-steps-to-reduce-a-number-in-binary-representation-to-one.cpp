class Solution {
public:
    int numSteps(string s) {
        int steps = 0;
        int carry = 0;
        
        // Process from right to left, skip the leading '1'
        for (int i = s.size() - 1; i > 0; i--) {
            int bit = (s[i] - '0') + carry;
            
            if (bit % 2 == 1) {
                // Odd: add 1 (causes a carry), then divide by 2
                // That's 2 steps
                steps += 2;
                carry = 1;
            } else {
                // Even: just divide by 2 (right shift)
                // That's 1 step
                steps += 1;
            }
        }
        
        // Account for any remaining carry on the leading bit
        steps += carry;
        
        return steps;
    }
};