class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int first = jewels.size();
        int second = stones.size();
        int count  = 0;
        for (int i = 0; i < first; i++){
            for (int j = 0; j < second; j++){
                if (jewels[i] == stones[j]){
                    count++;
                }
            }
        }
        return count;   
    }
};