#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int n = 0;
        int m = row*col-1;

        int mid = n + (m-n)/2;

        while(n<=m){
            int ele = matrix[mid/col][mid%col];

            if (ele == target){
                return true;
            }

            else if (ele>target){
                m = mid-1;
            }

            else{
                n = mid+1;
            }

            mid = n + (m-n)/2;
        }

        return false;
    }
};