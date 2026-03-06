#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        int n = grid.size();
        vector<int> arr;
        vector<int> ans;
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                arr.push_back(grid[i][j]);
            }
        }
        
        sort(arr.begin(), arr.end());
        
        int repeat = -1, missing = -1;
        
        for(int i = 0; i < arr.size()-1; i++){
            
            if(arr[i] == arr[i+1]){
                repeat = arr[i];
            }
            
            if(arr[i+1] - arr[i] > 1){
                missing = arr[i] + 1;
            }
        }
        
        if(arr[0] != 1){
            missing = 1;
        }
        
        int total = n*n;
        if(arr[arr.size()-1] != total){
            missing = total;
        }
        
        ans.push_back(repeat);
        ans.push_back(missing);
        
        return ans;
    }
};