#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;

        int maxarea = 0;

        while(left<right){
            int currarea = min(height[left],height[right]) * (right-left);
            if(currarea>maxarea) maxarea = currarea;

            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }


        }

        return maxarea;

    }
};