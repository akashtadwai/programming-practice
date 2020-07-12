vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
  vector<int> res;
  int i = 0, j = 0;
  int n = A.size(), m = B.size();
  while (i < n and j < m) {
    if (A[i] == B[j]) {
      res.push_back(A[i]);
      i++, j++;
    } else if (A[i] > B[j]) {
      j++;
    } else
      i++;
  }
  return res;
}
