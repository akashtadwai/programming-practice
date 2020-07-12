int Solution::solve(vector<int> &A, int m) {
  map<int, int> mp;
  int n = A.size(), ans = 0;
  int s = 0;
  for (int i = 0; i < n; i++) {
    mp[s]++;
    if (A[i] & 1)
      s++;
    if (s >= m)
      ans += mp[s - m];
  }
  return ans;
}
