#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int left = 0, ans = 0, sum = 0;
        unordered_map<int,int>mp;
        for(int right = 0; right < nums.size(); right++){
            mp[nums[right]]++;
            while(mp[nums[right]]>1){
                ans = max(ans, sum);
                sum-=nums[left];
                mp[nums[left]]--;
                left++;
            }

            if(mp[nums[right]] == 1){
                sum += nums[right];
            }
        }

        return max(sum,ans);
    }
};