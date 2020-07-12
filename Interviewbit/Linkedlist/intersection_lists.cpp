/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *Solution::getIntersectionNode(ListNode *A, ListNode *B) {
  // Do not write main() function.
  // Do not read input, instead use the arguments to the function.
  // Do not print the output, instead return values as specified
  // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for
  // more details
  auto cnt = [&](ListNode *head) {
    int count = 0;
    while (head != 0) {
      count++;
      head = head->next;
    }
    return count;
  };

  int m = cnt(A);
  int n = cnt(B);
  int d = n - m;
  if (d < 0) {
    swap(A, B);
    d = m - n;
  }
  for (int i = 0; i < d; i++) {
    B = B->next;
  }
  while (A != NULL and B != NULL) {
    if (A == B)
      return A;
    A = A->next;
    B = B->next;
  }
  return NULL;
}
