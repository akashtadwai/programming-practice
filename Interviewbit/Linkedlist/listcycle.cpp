/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *Solution::detectCycle(ListNode *A) {
  // Do not write main() function.
  // Do not read input, instead use the arguments to the function.
  // Do not print the output, instead return values as specified
  // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for
  // more details

  ListNode *sp = A;
  ListNode *fp = A;
  while (sp and fp and fp->next) {
    sp = sp->next;
    fp = fp->next->next;
    if (sp == fp)
      break;
  }
  if (sp != fp)
    return NULL;
  sp = A;
  while (sp != fp) {
    sp = sp->next;
    fp = fp->next;
  }

  return sp;
}
