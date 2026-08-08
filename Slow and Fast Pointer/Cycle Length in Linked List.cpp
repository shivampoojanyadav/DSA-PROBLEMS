#include<iostream>
using namespace std;


class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
  public:
    bool ispresentcycle(Node* head, Node* &slow, Node* &fast){
        slow = head;
        fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                slow = head;
                while(slow != fast){
                    slow = slow->next;
                    fast = fast->next;
                }
                return true;
            }
            
        }
        
        return false;
    }
    
    int lengthOfLoop(Node *head) {
        
        
        
        Node* slow;
        Node* fast;
        if(!ispresentcycle(head,slow,fast)){
            return 0;
        }
        int count = 1;
        slow = slow->next;
        while(slow != fast){
            count++;
            slow= slow->next;
        }
        
        return count;
    }
};