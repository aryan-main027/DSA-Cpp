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
  bool isPalindrome(ListNode *head)
  {
    ListNode *temp = head, *cur = head, *prev = NULL, *front = NULL;
    int count = 0;
    if (head->next == NULL)
      return true;
    while (temp)
    {
      count++;
      temp = temp->next;
    }

    count /= 2;
    while (count--)
    {
      prev = cur;
      cur = cur->next;
    }
    prev->next = NULL;
    prev = NULL;
    while (cur)
    {
      front = cur->next;
      cur->next = prev;
      prev = cur;
      cur = front;
    }
    ListNode *h1 = head, *h2 = prev;
    while (h1)
    {
      if (h1->val != h2->val)
        return false;
      h1 = h1->next;
      h2 = h2->next;
    }

    return true;
  }
};