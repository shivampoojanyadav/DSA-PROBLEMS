#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* curr = headA;
        int A = 0, B = 0;
        while(curr != NULL){
            A++;
            curr = curr->next;
        }
        curr = headB;
        while(curr != NULL){
            B++;
            curr = curr->next;
        }

        int diff = abs(A-B);
        if(A > B){
            while(diff){
                headA = headA->next;
                diff--;
            }
        }
        else{
            while(diff){
                headB = headB->next;
                diff--;
            }
        }

        while(headA != NULL && headB != NULL){
            if(headA == headB){
                return headA;
            }
            headA = headA->next;
            headB = headB->next;
        }

        return NULL;
    }
};