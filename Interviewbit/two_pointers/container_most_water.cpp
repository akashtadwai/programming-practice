int Solution::maxArea(vector<int> &A) {
  int max_area = 0;
  int n = A.size();
  int l = 0, r = n - 1;
  while (l < r) {
    int mn = min(A[r], A[l]);
    max_area = max(max_area, (r - l) * mn);
    if (mn == A[l])
      l++;
    else
      r--;
  }
  return max_area;
}
