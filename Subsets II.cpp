#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:

    void getsubsets(vector<int>& nums,vector<vector<int>>&allsubsets,int i,vector<int>ans){
        if(i == nums.size()){
            allsubsets.push_back(ans);
            return;
        }

        ans.push_back(nums[i]);
        getsubsets(nums,allsubsets,i+1,ans);
        ans.pop_back();

        int idx = i+1;
        while(idx<nums.size() && nums[idx] == nums[idx-1]) idx++;

        getsubsets(nums,allsubsets,idx,ans);

    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>allsubsets;
        vector<int>ans;
        sort(nums.begin(),nums.end());

        getsubsets(nums,allsubsets,0,ans);

        return allsubsets;

    }
};