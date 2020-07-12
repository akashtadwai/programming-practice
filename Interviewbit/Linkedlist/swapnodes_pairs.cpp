/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *Solution::swapPairs(ListNode *head) {
  if (!head or !(head->next))
    return head;
  ListNode *new_head = head->next;
  ListNode *rem = head->next->next;
  head->next->next = head;
  head->next = swapPairs(rem);
  return new_head;
}
