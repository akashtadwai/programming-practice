int Solution::singleNumber(const vector<int> &A) {
  int n = A.size();
  int cnt[32] = {0};
  int ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 32; j++)
      if (A[i] & (1 << j))
        cnt[j]++;
  }
  for (int i = 0; i < 32; i++) {
    if (cnt[i] % 3)
      ans |= (1 << i);
  }
  return ans;
}
