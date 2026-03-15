#include<iostream>
#include<vector>
#include<climits>
#include <algorithm>
using namespace std;

class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // code here
        int ans = INT_MAX;
        sort(a.begin(),a.end());
        int i = 0 , j = i + (m-1);
        
        while (j<a.size()){
            ans = min(ans , a[j++]-a[i++]);
        }
        
        return ans;
    }
};