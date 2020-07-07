vector<int> Solution::searchRange(const vector<int> &A, int B) {
  if (!binary_search(A.begin(), A.end(), B))
    return {-1, -1};
  int lo = lower_bound(A.begin(), A.end(), B) - A.begin();
  int up = upper_bound(A.begin(), A.end(), B) - A.begin() - 1;
  return {lo, up};
}
