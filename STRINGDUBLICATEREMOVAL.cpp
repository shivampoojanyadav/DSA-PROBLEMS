#include<iostream>
#include<map>
using namespace std;

class Solution {
  public:
    string removeDuplicates(string &s) {
        
        map<char,bool>temp;
        string ans = "";
        for(int i = 0; i<s.length(); i++){
            if(temp[s[i]] != true){
                ans.push_back(s[i]);
                temp[s[i]]= true;
            }
        }
        
        return ans;
    }
};