/*
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution
{
public:
  void removeLoop(Node *head)
  {
    // code here
    Node *cur = head, *prev = NULL;
    unordered_map<Node *, bool> v;
    while (cur && v[cur] != 1)
    {
      v[cur] = 1;
      prev = cur;
      cur = cur->next;
    }
    if (cur == NULL)
      return;
    prev->next = NULL;
  }
};