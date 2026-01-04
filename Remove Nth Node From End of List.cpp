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
  ListNode *removeNthFromEnd(ListNode *head, int n)
  {
    ListNode *cur = head, *prev = NULL;
    ListNode *temp = head;
    int count = 1;
    if (head->next == NULL)
    {
      delete head;
      return NULL;
    }
    while (cur)
    {
      prev = cur;
      if (count == n)
      {
        count = 1;
        prev->next = cur->next;
        cur = prev->next;
      }
      cur = cur->next;
      count++;
    }
    return head;
  }
};