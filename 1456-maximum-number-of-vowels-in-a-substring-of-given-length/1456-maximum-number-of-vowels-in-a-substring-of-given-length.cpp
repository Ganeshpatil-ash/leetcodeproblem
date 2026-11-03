class Solution {
public:
    bool isVowel(char c){
        return c == 'a'|| c == 'e'|| c =='i'|| c == 'o'|| c == 'u';
    }  
    int maxVowels(string s, int k) {
        int size = s.length();
        int count = 0;
        for (int i = 0; i < k; i++){
            if (isVowel(s[i])){
                count++;
            }
            
        }  
        int maxcount = count;

        for (int i = k; i < size; i++){
            if(isVowel (s[i])){
                count++;
            
            }
            if(isVowel(s[i-k])){
                count--;
            }
            maxcount = max(maxcount,count);
        }
        return maxcount;
        }
        
    
};