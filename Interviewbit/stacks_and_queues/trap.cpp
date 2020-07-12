int Solution::trap(const vector<int> &A) {
  int n = A.size();
  vector<int> l;
  vector<int> r(n);
  l.push_back(A[0]);
  for (int i = 1; i < n; i++)
    l.push_back(max(l[i - 1], A[i]));
  r[n - 1] = A[n - 1];
  for (int i = n - 2; i >= 0; i--)
    r[i] = max(r[i + 1], A[i]);
  int ans = 0;
  for (int i = 1; i < n - 1; i++)
    ans += min(l[i], r[i]) - A[i];
  return ans;
}
