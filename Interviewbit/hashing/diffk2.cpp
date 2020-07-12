int Solution::diffPossible(const vector<int> &A, int B) {
  map<int, bool> mp;
  int n = A.size();
  for (int i = 0; i < n; i++) {
    if (mp.count(A[i] - B) or mp.count(A[i] + B))
      return 1;
    mp[A[i]] = true;
  }
  return 0;
}
