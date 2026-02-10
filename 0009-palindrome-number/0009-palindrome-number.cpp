#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        // negative numbers are not palindrome
        // numbers ending with 0 (except 0) also not palindrome
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;

        int rev = 0;

        // reverse only half
        while (x > rev) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }

        // for even digits: x == rev
        // for odd digits:  x == rev/10
        return (x == rev || x == rev/10);
    }
};
