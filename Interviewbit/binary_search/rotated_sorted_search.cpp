int Solution::search(const vector<int> &A, int B) {
  int n = A.size();
  int l = 0, h = n - 1;
  while (l <= h) {
    int mid = l + (h - l) / 2;
    if (A[mid] == B)
      return mid;
    else if (A[mid] <= A[h]) {
      if (B > A[mid] and B <= A[h])
        l = mid + 1;
      else
        h = mid - 1;
    } else if (A[mid] >= A[l]) {
      if (B < A[mid] and B >= A[l])
        h = mid - 1;
      else
        l = mid + 1;
    }
  }
  return -1;
}
