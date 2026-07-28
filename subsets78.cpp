#include<iostream>
#include<vector>

using namespace std;


class Solution {
public:

    void getallsets(vector<int>& nums,vector<vector<int>>&ans,vector<int>&current,int i){
        if(i==nums.size()){
            ans.push_back(current);
            return;
        }

        current.push_back(nums[i]);
        getallsets(nums,ans,current,i+1);

        current.pop_back();

        getallsets(nums,ans,current,i+1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>current;

        getallsets(nums,ans,current,0);

        return ans;
        
    }
};