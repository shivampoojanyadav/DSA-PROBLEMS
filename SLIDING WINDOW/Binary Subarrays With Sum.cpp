#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

    int atmost(vector<int>&nums, int goal){
        long long ans = 0, left = 0, sum = 0;
        for(int right = 0; right < nums.size(); right++){
            sum+=nums[right];
            while(left <= right && sum > goal){
                sum-=nums[left];
                left++;
            }

            ans += right - left + 1;
        }

        return ans;
    }


    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
        return atmost(nums, goal) - atmost(nums, goal-1);
    }
};