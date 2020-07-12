int Solution::minimize(const vector<int> &A, const vector<int> &B,
                       const vector<int> &C) {
  int i = 0, j = 0, k = 0;
  int diff = INT_MAX;
  int res_i = 0, res_j = 0, res_k = 0;
  int m = A.size(), n = B.size(), p = C.size();
  int mx, mn;
  while (i < m and j < n and k < p) {
    mx = max({A[i], B[j], C[k]});
    mn = min({A[i], B[j], C[k]});
    if (mx - mn < diff) {
      res_i = i, res_j = j, res_k = k;
      diff = mx - mn;
    }
    if (diff == 0)
      break;
    if (mn == A[i])
      i++;
    else if (mn == B[j])
      j++;
    else
      k++;
  }
  return max({abs(A[res_i] - B[res_j]), abs(B[res_j] - C[res_k]),
              abs(C[res_k] - A[res_i])});
}
