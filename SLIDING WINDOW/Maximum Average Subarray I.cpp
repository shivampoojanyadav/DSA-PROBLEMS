#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left = 0;
        long long maxsum = INT_MIN; 
        long long currsum = 0; 
        for(int right = 0; right < nums.size(); right++){
            currsum+=nums[right];
            if(right-left+1 == k){
                maxsum = max(maxsum,currsum);
                currsum-=nums[left];
                left++;
            }

        }

        return double(maxsum)/k;
    }
};