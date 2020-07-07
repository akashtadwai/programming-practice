vector<int> Solution::flip(string A) {
  int n = A.size();
  vector<int> ans(n);
  vector<int> res;
  int parity = 0;
  for (int i = 0; i < n; i++) {
    if (A[i] == '0')
      ans[i] = 1;
    else
      ans[i] = -1;
    parity += ans[i];
  }
  if (parity == -n)
    return res;
  int l = 0, r = 0, li = 0, max_so_far = INT_MIN, max_ending_here = 0;
  for (int i = 0; i < ans.size(); i++) {
    max_ending_here += ans[i];
    if (max_so_far < max_ending_here) {
      li = l;
      r = i;
      max_so_far = max_ending_here;
    }
    if (max_ending_here < 0) {
      max_ending_here = 0;
      l = i + 1;
    }
  }
  res.push_back(li + 1), res.push_back(r + 1);
  return res;
}
