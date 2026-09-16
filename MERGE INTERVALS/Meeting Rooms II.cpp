#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
  public:
    int minMeetingRooms(vector<int> &start, vector<int> &end) {
        
        map<int, int>mp;
        int n = start.size();
        
        for(int i = 0; i<n; i++){
            mp[start[i]]++;
            mp[end[i]]--;
        }
        
        int overlap = 0;
        int maxoverlap = 0;
        
        for(auto &it : mp){
            overlap += it.second;
            if(overlap > maxoverlap){
                maxoverlap = overlap;
            }
        }
        
        return maxoverlap;
        
        
    }
};
