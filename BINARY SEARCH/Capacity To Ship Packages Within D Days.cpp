#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = getmax(weights);
        int high = getsum(weights);

        while(low < high){
            int mid = low + (high - low)/2;
            if(canShip(weights, days, mid)){
                high = mid;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
public:
    int getsum(vector<int>& weights){
        int sum = 0;
        for(int w : weights){
            sum+=w;
        }
        return sum;
    }
public:
    int getmax(vector<int>& weights){
        int maxi = 0;
        for(int w : weights){
            maxi = max(w,maxi);
        }
        return maxi;
    }
public:
    int canShip(vector<int>& weights, int days, int capacity){
       int dayCount = 1;
       int currload = 0;

       for(int w : weights){
        if(currload + w > capacity){
            dayCount++;
            currload = 0;
        }
        currload += w;
        if(dayCount > days){
            return false;
        }
       }
       return true;
    }

};