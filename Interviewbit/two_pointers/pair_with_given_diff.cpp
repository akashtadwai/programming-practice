int Solution::solve(vector<int> &A, int B) {
  sort(A.begin(), A.end());
  int i = 0, j = 1;
  int n = A.size();
  while (i < n and j < n) {
    if (i != j and A[j] - A[i] == B)
      return 1;
    else if (A[j] - A[i] < B)
      j++;
    else
      i++;
  }
  return 0;
}
