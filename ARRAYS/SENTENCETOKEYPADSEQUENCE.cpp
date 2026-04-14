#include<iostream>

using namespace std;

string printSequence(string S) {
    
    string arr[26] = {"2","22","222","3","33","333","4","44","444",
        "5","55","555","6","66","666","7","77","777","7777","8","88",
        "888","9","99","999","9999"
    };
    
    string ans = "";
    
    for (int i = 0; i<S.length(); i++){
        if(S[i]== ' ')
        ans.push_back('0');
        else{
            ans+=arr[S[i]-'A'];
        }
        
    }
    
    return ans;
}