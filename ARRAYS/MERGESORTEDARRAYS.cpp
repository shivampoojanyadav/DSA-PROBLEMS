#include<iostream>
#include<vector>
using namespace std;

class solution {
    public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
        int i = 0;
        int j = 0;
        int k = 0;

        int arr [m+n];

        while(i<m && i<n){
            if(nums1[i]<nums2[2]){
                arr[k++] = arr[i++];
            }else{
                arr[k++] = nums2[j++];
            }

        while(i<m){
            arr[k++] = nums1[i++];
        }

        while(j<n){
            arr[k++] = nums2[j++];
        }

        for (int i = 0; i<m+n; i++){
            nums1[i] = arr[i];
        }

        }
    }
};