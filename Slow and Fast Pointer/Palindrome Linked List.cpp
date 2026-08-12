#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode * findmiddle(ListNode*head){
        ListNode * slow = head;
        ListNode * fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
        
    }
    ListNode * reverse(ListNode * head){
        ListNode * middle = findmiddle(head);

        ListNode * curr = middle;
        ListNode * prev = NULL;
        ListNode * forward = NULL;

        while(curr != NULL){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;

        }

        return prev;

    }
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        ListNode * prev = reverse(head);

        while(prev != NULL){
            if(prev->val != temp->val){
                return false;
            }

            temp = temp->next;
            prev = prev->next;
        }
        return true; 

    }
};