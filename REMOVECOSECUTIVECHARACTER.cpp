#include<iostream>
using namespace std;

class Solution {
  public:
    string removeConsecutiveCharacter(string& s) {
        // code here.
        string ans = "";
        ans.push_back(s[0]);
        
        for(int i =1; i<s.length(); i++){
            if(s[i]!=s[i-1]){
                ans.push_back(s[i]);
            }
        }
        
        
        return ans;
    }
    
};