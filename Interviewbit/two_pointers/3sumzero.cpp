vector<vector<int>> Solution::threeSum(vector<int> &A) {
  int n = A.size();
  set<vector<int>> res;
  sort(A.begin(), A.end());
  for (int i = 0; i < n - 1; i++) {
    int l = i + 1, r = n - 1;
    while (l < r) {
      long long s = 1LL * A[l] + A[r] + A[i];
      if (s == 0) {
        vector<int> t{A[i], A[l], A[r]};
        res.insert(t);
        l++;
        r--;
      } else if (s > 0)
        r--;
      else
        l++;
    }
  }
  vector<vector<int>> re;
  for (auto it = res.begin(); it != res.end(); it++)
    re.push_back(*it);
  return re;
}
