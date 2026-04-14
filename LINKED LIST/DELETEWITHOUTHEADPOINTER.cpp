#include<iostream>

using namespace std;
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

class solution {
    public:
    void deletenode(Node*del_node){

        if (del_node == NULL || del_node->next == NULL){
            return;
        }
        Node*temp = del_node->next;

        del_node->data == temp->data;
        del_node->next == temp->next;

        delete temp;

    }
};