#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int count(vector<int>& nums, int bound){
        long long ans = 0;
        int last = -1;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] > bound){
                last = i;
            }
            ans+=i-last;
        }

        return ans;
    }
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        return count(nums,right) - count(nums, left-1);
    }
};