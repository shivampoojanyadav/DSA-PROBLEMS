#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        vector<pair<int,int>>p;
        for(int i = 0; i<nums.size(); i++){
            p.push_back({nums[i],i});
        }
        sort(p.begin(),p.end());

        int left = 0;
        int right = p.size() -1;

        while(left<right){
            int sum = p[left].first + p[right].first;
            if(sum == target){
                ans.push_back(p[left].second);
                ans.push_back(p[right].second);
                break;
            }
            if(sum < target){
                left++;
            }
            else{
                right--;
            }
        }

        return ans;

    }
};