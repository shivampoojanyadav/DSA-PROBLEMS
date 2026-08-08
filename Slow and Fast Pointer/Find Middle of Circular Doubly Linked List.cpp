#include<iostream>
using namespace std;


class Node
{
  public:
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
};


class Solution {
  public:
    int findMiddle(Node* head) {
        
        Node* slow = head;
        Node* fast = head;
        
        while(fast->next != head){
            fast = fast->next->next;
            slow = slow->next;
        }
        
        return slow->data;
    }
};