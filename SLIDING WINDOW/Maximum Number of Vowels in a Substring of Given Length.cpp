#include<iostream>
using namespace std;

class Solution {
public:
    int maxVowels(string s, int k) {

       int left = 0;
       int n = s.length();
       int maxvowel = 0;
       int count = 0;

       auto isvowel = [&](char ch){
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
       };

       for(int right = 0; right < n; right++){
           if(isvowel(s[right])){
            count++;
           } 
           if(right - left +1 == k){
            maxvowel = max(count, maxvowel);
            if(isvowel(s[left])){
                count--;
            }
            left++;
           }

       }

       return maxvowel;
        
    }
};