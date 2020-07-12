/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode *A) {
  string str = "";
  while (A != NULL) {
    str += A->val;
    A = A->next;
  }
  string rev = str;
  reverse(str.begin(), str.end());
  if (rev == str)
    return 1;
  return 0;
}
