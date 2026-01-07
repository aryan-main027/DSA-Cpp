/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    // Function to remove duplicates from sorted linked list.
    Node* removeDuplicates(Node* head) {

        // code here
        Node * prev = head;
        Node * cur = head->next;
        
        if(head->next == NULL)
            return head;
        
        while(cur){
            if(prev->data == cur->data){
                prev->next = cur->next;
                delete cur;
                cur = prev->next;
            }   else {
                prev = prev->next;
                cur = cur->next;
            }
        }
        
        return head;
    }
};

// if space complexity == O(1) 
// then we can use array to store unique value