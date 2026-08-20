#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        int longest = 0;
        vector<int>count(26,0);

        for(int right = 0; right<s.length(); right++){
            count[s[right] - 'A']++;

            while((right - left + 1) - *max_element(count.begin(), count.end()) > k){

                count[s[left] - 'A']--;
                left++;
            }

            longest = max(right - left +1, longest);

        }

        return longest;
    }
};