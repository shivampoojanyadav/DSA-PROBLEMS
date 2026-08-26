#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mp;
        int result = 0;
        int i = 0;

        for(int j = 0; j < n; j++){
            mp[nums[j]]++;

            while(i<j && mp[nums[j]] > k){
                mp[nums[i]]--;
                i++;
            }

            result = max(result, j-i+1);
        }

        return result;
    }
};