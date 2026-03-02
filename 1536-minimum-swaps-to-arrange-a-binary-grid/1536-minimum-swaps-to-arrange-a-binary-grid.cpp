class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n = grid.size();
        
        // Count trailing zeros for each row
        vector<int> zeros(n);
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = n - 1; j >= 0 && grid[i] [j] == 0; j--)
                count++;
            zeros[i] = count;
        }
        
        int swaps = 0;
        for (int i = 0; i < n; i++) {
            int need = n - 1 - i;
            
            // Find the nearest row at or below i with enough trailing zeros
            int found = -1;
            for (int j = i; j < n; j++) {
                if (zeros[j] >= need) {
                    found = j;
                    break;
                }
            }
            
            if (found == -1) return -1; // No valid row exists
            
            // Bubble the found row up to position i
            while (found > i) {
                swap(zeros[found], zeros[found - 1]);
                found--;
                swaps++;
            }
        }
        
        return swaps;
    }
};