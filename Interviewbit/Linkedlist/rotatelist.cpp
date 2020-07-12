/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *Solution::rotateRight(ListNode *A, int B) {
  ListNode *temp = A;
  int l = 1;
  while (temp->next != NULL) {
    temp = temp->next;
    l++;
  }
  B = B % l;
  B = l - B;
  ListNode *cur = A;
  if (B == 0 or B == l)
    return A;
  int cnt = 1;
  while (cnt < B and cur) {
    cur = cur->next;
    cnt++;
  }
  if (!cur)
    return A;
  ListNode *kth = cur;
  temp->next = A;
  A = kth->next;
  kth->next = NULL;
  return A;
}
