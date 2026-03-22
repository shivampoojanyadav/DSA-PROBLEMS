#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";


        if (strs.size()==0 ){
            return ans;
        }

        if (strs.size()==1){
            return strs[0];
        }

        sort(strs.begin(),strs.end());
        string first = strs[0];
        string last = strs[strs.size()-1];

        

        for (int i = 0; i<first.length(); i++){
            if (first[i]!=last[i])
            break;

            ans.push_back(first[i]);

        } 

        return ans;
    }
};