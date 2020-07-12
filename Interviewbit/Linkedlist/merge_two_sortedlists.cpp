/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode *smerge(ListNode *A, ListNode *B) {
  ListNode *res = NULL;
  if (A == NULL)
    return B;
  else if (B == NULL)
    return A;
  if (A->val <= B->val) {
    res = A;
    res->next = smerge(A->next, B);
  } else {
    res = B;
    res->next = smerge(A, B->next);
  }
  return res;
}
ListNode *Solution::mergeTwoLists(ListNode *A, ListNode *B) {
  // return smerge(A,B);
  ListNode *dummy = new ListNode(0);
  ListNode *curr = dummy;
  ListNode *p1 = A, *p2 = B;
  while (p1 and p2) {
    if (p1->val <= p2->val) {
      curr->next = p1;
      p1 = p1->next;
    } else {
      curr->next = p2;
      p2 = p2->next;
    }
    curr = curr->next;
  }
  curr->next = p1 ? p1 : p2;
  return dummy->next;
}
