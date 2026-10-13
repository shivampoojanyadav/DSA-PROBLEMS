#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:

    bool CanEat(vector<int>& piles, int mid, int h){
        int actualhours = 0;
        for(int &x : piles){
            actualhours += x/mid;
            
            if(x%mid != 0){
                actualhours++;
            }
        }

        return actualhours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int l = 1, r = *max_element(piles.begin(), piles.end());

        while(l<r){
            int mid = l + (r-l)/2;

            if(CanEat(piles, mid, h)){
                r = mid;
            }else{
                l = mid + 1;
            }
        }
        return l;
    }
};