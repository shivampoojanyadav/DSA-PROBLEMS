#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length()!=t.length()) return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        return s==t;
    }
};


class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>count(26);
        for(char c : s){
            count[c-'a']++;
        } 
        for(char c : t){
            count[c-'a']--;
        } 

        for(int i = 0; i<26; i++){
            if(count[i]!=0){
                return false;
            }
        }
        return true;
    }
};