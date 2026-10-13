#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:

    int ispossible(vector<int>& nums, int mid){
        int tempsum = 0, count = 0, n = nums.size();
        for(int i = 0; i < n ; i++){
            if(tempsum + nums[i] <= mid) tempsum += nums[i];
            else count++, tempsum = nums[i];
        }
        count++;
        return count;
    }

    int splitArray(vector<int>& nums, int k) {
        int l = 0, r = 0, n = nums.size();
        for (int i = 0 ; i < n; i++) l = max(l, nums[i]), r+=nums[i];
        int ans = 0;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(ispossible(nums, mid) <= k) r = mid-1, ans = mid;
            else l = mid +1;
        }

        return ans;
    }
};