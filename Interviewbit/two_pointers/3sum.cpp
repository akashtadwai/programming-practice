int Solution::threeSumClosest(vector<int> &A, int B) {
  sort(A.begin(), A.end());
  int n = A.size();
  long cl = 0;
  for (int i = 0; i < n; i++) {
    int l = i + 1, r = n - 1;
    while (l < r) {
      long sum = A[l] + A[r] + A[i];
      if (abs(B - sum) < abs(cl - B))
        cl = sum;
      if (sum > B)
        r--;
      else
        l++;
    }
  }
  return cl;
}
