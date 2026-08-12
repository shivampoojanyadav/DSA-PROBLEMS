#include<iostream>
using namespace std;


class Solution {
public:

public:
    int square(int num){
        int ans = 0;
        while(num !=0 ){
            int digit = num%10;
            ans = ans + digit * digit;
            num = num/10;
        }
        return ans;
    }
    bool isHappy(int n) {
        int slow = square(n);
        int fast = square(square(n));

        while(slow != fast){
            slow = square(slow);
            fast = square(square(fast));
            if(slow == 1 || fast == 1){
                return true;
            }
        }
        return slow == 1;
    }
};