#include<iostream>
#include<climits>
#include<vector>

using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int ans = INT_MAX;
        int window = 0;
        int right = 0;
        while(right < n){
            window += nums[right];
            while(window>=target){
                ans = min(ans , right-left+1);
                window-=nums[left++];
            }
            right++;
        }

        return ans == INT_MAX ? 0 : ans;
    }
};