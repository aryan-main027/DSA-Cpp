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
  ListNode *middleNode(ListNode *head)
  {
    int count = 0;
    ListNode *cur = head;
    while (cur)
    {
      count++;
      cur = cur->next;
    }

    int jump = count / 2;
    cur = head;
    while (jump)
    {
      jump--;
      cur = cur->next;
    }
    return cur;
  }
};