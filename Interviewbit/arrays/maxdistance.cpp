int Solution::maximumGap(const vector<int> &A) {
  int n = A.size();
  vector<pair<int, int>> p(n);
  for (int i = 0; i < n; i++) {
    p[i].first = A[i];
    p[i].second = i + 1;
  }
  sort(p.begin(), p.end());
  int ans = 0;
  int rmax = p[n - 1].second;
  for (int i = n - 2; i >= 0; i--) {
    ans = max(ans, rmax - p[i].second);
    rmax = max(rmax, p[i].second);
  }
  return ans;
}
