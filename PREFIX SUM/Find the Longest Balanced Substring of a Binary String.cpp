#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int n = s.length();
        int ans = 0;
        for(int i = 0; i<n; i++){
            int zero = 0,one = 0;
            if(s[i] == '0'){
                while(i<n && s[i] == '0')i++, zero++;
                while(i<n && s[i] == '1')i++, one++;
                --i;
            }
            int len = min(one,zero);
            ans = max(ans, 2*len);
        }

        return ans;
    }
};