int Solution::solve(vector<int> &A, int B) {
  map<int, int> mp;
  int ans = 0;
  int n = A.size();
  for (int i = 0; i < n; i++)
    mp[A[i]]++;
  for (int i = 0; i < n; i++) {
    if (mp.count(B ^ A[i]))
      ans += mp[B ^ A[i]];
  }
  return ans / 2;
}
