/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
  ListNode *rotateRight(ListNode *head, int k)
  {
    ListNode *cur = head, *prev = NULL, *tail = NULL;
    ListNode *temp = head;
    int count = 0;
    if (!head)
      return NULL;
    if (head->next == NULL)
      return head;
    while (temp)
    {
      count++;
      temp = temp->next;
    }
    k = k % count;
    if (k == 0)
      return head;
    count -= k;
    while (count--)
    {
      prev = cur;
      cur = cur->next;
    }

    prev->next = NULL;
    tail = cur;
    while (tail->next != NULL)
    {
      tail = tail->next;
    }

    tail->next = head;
    head = cur;
    return head;
  }
};