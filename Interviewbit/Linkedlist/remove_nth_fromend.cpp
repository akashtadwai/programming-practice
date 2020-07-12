/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *Solution::removeNthFromEnd(ListNode *A, int B) {
  ListNode *fp = A;
  ListNode *sp = A;
  for (int i = 0; i < B; i++) {
    if (fp->next == NULL) {
      return sp->next;
    }
    fp = fp->next;
  }
  while (fp->next != NULL) {
    sp = sp->next;
    fp = fp->next;
  }
  sp->next = sp->next->next;

  return A;
}
