class Solution {
public:
    int concatenatedBinary(int n) {
        long long ans = 0;
        int bits = 0;
        const int MOD = 1e9 + 7;
        
        for (int i = 1; i <= n; i++) {
            // When i is a power of 2, it gains an extra bit
            if ((i & (i - 1)) == 0) bits++;
            ans = ((ans << bits) + i) % MOD;
        }
        
        return (int)ans;
    }
};