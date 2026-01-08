/*
class Node {
   public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
} */

class Solution
{
public:
  bool detectLoop(Node *head)
  {
    // code here
    Node *cur = head;
    unordered_map<Node *, bool> v;

    while (cur)
    {
      if (v[cur] == 1)
        return true;

      v[cur] = 1;
      cur = cur->next;
    }

    return false;
  }
};