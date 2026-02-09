class Solution {
public:
    bool isPalindrome(string s) {

        int k = 0;
        int l = s.length() - 1;

        while(k < l){

            // skip non-alphanumeric from left
            while(k < l && !isalnum(s[k])){
                k++;
            }

            // skip non-alphanumeric from right
            while(k < l && !isalnum(s[l])){
                l--;
            }

            // compare lowercase
            if(tolower(s[k]) != tolower(s[l])){
                return false;
            }

            k++;
            l--;
        }

        return true;
    }
};
