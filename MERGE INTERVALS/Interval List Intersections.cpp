#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        int a = 0;
        int b = 0;

        vector<vector<int>>intervals;

        while(a < firstList.size() && b < secondList.size()){
            int intervalstarting = max(firstList[a][0], secondList[b][0]);
            int intervalending = min(firstList[a][1], secondList[b][1]);

            if(intervalstarting <= intervalending){
                intervals.push_back({intervalstarting, intervalending});
            }
            if(firstList[a][1] < secondList[b][1]){
                a++;
            }else{
                b++;
            }
        }
        return intervals;

    }
};