#include<iostream>
#include<stack>
using namespace std;


class Solution {
public:
    bool isValid(string s) {
        stack<char>a;
        for(int i = 0; i<s.length(); i++){
            char ch = s[i];
            if (ch == '('|| ch == '{' || ch == '['){
                a.push(ch);
            }

            else {
                
                if(!a.empty()){
                    char top = a.top();
                    if ((top=='('&& ch==')')|| (top =='{'&& ch == '}') || (top == '[' && ch == ']')){
                        a.pop();
                    } 
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
                
            }
        }

        if(a.empty()){
            return true;
        }
        else{
            return false;
        }

      

    }
};