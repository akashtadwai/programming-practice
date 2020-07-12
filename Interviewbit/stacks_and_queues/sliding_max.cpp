vector<int> Solution::slidingMaximum(const vector<int> &A, int k) {
  map<int, int> mp;
  int n = A.size();
  vector<int> res;
  for (int i = 0; i < k; i++) {
    mp[A[i]]++;
  }
  res.push_back(mp.rbegin()->first);
  for (int i = k, j = 0; i < A.size(); i++, j++) {
    if (mp[A[j]] == 1)
      mp.erase(A[j]);
    else
      mp[A[j]]--;
    mp[A[i]]++;
    res.push_back(mp.rbegin()->first);
  }
  return res;
}
