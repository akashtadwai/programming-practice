#include <bits/stdc++.h>
bool isValid(vector<int> &A, int mid, int B) {
  int s = 0, cnt = 0;
  for (int i = 0; i < A.size(); i++) {
    if (A[i] > mid)
      return false;
    s += A[i];
    if (s > mid) {
      s = A[i];
      cnt++;
    }
  }
  return (++cnt <= B);
}
int Solution::books(vector<int> &A, int B) {
  int mx = accumulate(A.begin(), A.end(), 0LL);
  int mn = 0;
  if (B > A.size())
    return -1;
  while (mn < mx) {
    int mid = mn + (mx - mn) / 2;
    if (isValid(A, mid, B))
      mx = mid;
    else
      mn = mid + 1;
  }
  return mn;
}
