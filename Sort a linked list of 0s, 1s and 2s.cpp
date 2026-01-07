/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution
{
public:
  Node *segregate(Node *head)
  {
    // code here
    int count0 = 0, count1 = 0, count2 = 0;
    Node *cur = head;
    while (cur)
    {
      if (cur->data == 0)
        count0++;
      if (cur->data == 1)
        count1++;
      if (cur->data == 2)
        count2++;

      cur = cur->next;
    }

    cur = head;
    while (count0-- && cur)
    {
      cur->data = 0;
      cur = cur->next;
    }
    while (count1-- && cur)
    {
      cur->data = 1;
      cur = cur->next;
    }
    while (count2-- && cur)
    {
      cur->data = 2;
      cur = cur->next;
    }

    return head;
  }
};