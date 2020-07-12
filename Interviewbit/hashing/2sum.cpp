vector<int> Solution::twoSum(const vector<int> &A, int B) {
  map<int, int> mp;
  int n = A.size();
  int l, r = INT_MAX;
  int i1, i2;
  for (int i = 0; i < n; i++) {
    if (mp.count(B - A[i])) {
      i1 = mp[B - A[i]] + 1;
      i2 = i + 1;
      if (i2 < r) {
        r = i2;
        l = i1;
      }
    }
    if (!mp.count(A[i]))
      mp[A[i]] = i;
  }
  vector<int> res;
  if (r == INT_MAX)
    return res;
  res.push_back(l), res.push_back(r);
  return res;
}
