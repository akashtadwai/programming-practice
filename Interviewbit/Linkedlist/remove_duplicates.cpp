/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *Solution::deleteDuplicates(ListNode *A) {
  ListNode *current = A;
  if (current == NULL)
    return NULL;
  while (current->next != NULL) {
    if (current->next->val == current->val) {
      ListNode *temp = current->next->next;
      free(current->next);
      current->next = temp;
    } else
      current = current->next;
  }
  return A;
}
