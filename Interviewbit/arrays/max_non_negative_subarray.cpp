vector<int> Solution::maxset(vector<int> &A) {
  int l = 0, r = 0, L = 0, R = 0, mx = -1;
  long long s = 0;
  for (int i = 0; i < A.size(); i++) {
    if (A[i] >= 0) {
      s += A[i];
      r++;
    } else {
      l = i + 1;
      r = i + 1;
      s = 0;
    }
    if (s >= mx) {
      if (R - L < r - l or s > mx) {
        L = l;
        R = r;
      }
      mx = s;
    }
  }
  vector<int> res;
  for (int i = L; i < R; i++) {
    res.push_back(A[i]);
  }
  return res;
}
