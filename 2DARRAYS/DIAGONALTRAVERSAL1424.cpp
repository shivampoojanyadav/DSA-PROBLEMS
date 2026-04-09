#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        
        unordered_map<int , vector<int>>mp;

        int n = nums.size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < nums[i].size(); j++){
                mp[i+j].push_back(nums[i][j]);
            }
        }

        int diag = 0;
        vector<int>result;

        while(mp.find(diag)!=mp.end()){

            vector<int>temp = mp[diag];
            for(int i = temp.size()-1; i >=0; i--){
                result.push_back(temp[i]);
            }

            diag++;
        }

        return result;


    }
};