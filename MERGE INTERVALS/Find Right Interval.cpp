#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution {
public:
     int binarySearch(vector<int>& arr, int target) {

        int s = 0;
        int e = arr.size() - 1;

        while (s <= e) {

            int mid = s + (e - s) / 2;

            if (arr[mid] < target) {
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }

        return s;
    }
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
                unordered_map<int, int> hm;

        int n = intervals.size();

        vector<int> first(n);

        // Store starting point -> original index
        for (int i = 0; i < intervals.size(); i++) {

            hm[intervals[i][0]] = i;

            first[i] = intervals[i][0];
        }

        // Sort all starting points
        sort(first.begin(), first.end());

        vector<int> ans(n);

        // Find right interval for every interval
        for (int i = 0; i < intervals.size(); i++) {

            int key = binarySearch(first, intervals[i][1]);

            if (key == first.size()) {
                ans[i] = -1;
            }

            else if (key == 0) {

                if (intervals[i][1] <= first[0]) {
                    ans[i] = hm[first[0]];
                }
                else {
                    ans[i] = -1;
                }
            }

            else {
                ans[i] = hm[first[key]];
            }
        }

        return ans;
    }
};