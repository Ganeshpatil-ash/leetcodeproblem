class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);

        vector<string> words;
        string word;
        string ans = "";

        while (ss >> word) {
            words.push_back(word);
        }

        int n = words.size();

        for (int i = n - 1; i >= 0; i--) {
            ans += words[i] + " ";
        }

        if (!ans.empty()) {
            ans.pop_back();
        }

        return ans;
    }
};