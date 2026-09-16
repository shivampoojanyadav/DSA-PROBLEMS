#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
  public:
    bool canAttend(vector<vector<int>> &arr) {
        sort(arr.begin(), arr.end());
        int i = 0;
        for(int j = 1; j < arr.size(); j++){
            if(arr[j][0] >= arr[i][1]){
                i++;
            }else{
                return false;
            }
        }
        
        return true;
    }
};