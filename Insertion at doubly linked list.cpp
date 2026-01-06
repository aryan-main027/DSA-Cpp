/*
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};
*/

class Solution
{
public:
  Node *insertAtPos(Node *head, int p, int x)
  {
    // code here
    p++;
    Node *temp = new Node(x);

    if (p == 0)
    {
      if (head == NULL)
      {
        return temp;
      }
      else
      {
        temp->next = head;
        head->prev = temp;
        return temp;
      }
    }
    else
    {
      Node *cur = head;
      while (--p && cur != NULL)
      {
        cur = cur->next;
      }
      if (cur->next == NULL)
      {
        temp->prev = cur;
        cur->next = temp;
        return head;
      }
      else
      {
        temp->next = cur->next;
        temp->prev = cur;
        cur->next = temp;
        temp->next->prev = temp;
        return head;
      }
    }
    return head;
  }
};