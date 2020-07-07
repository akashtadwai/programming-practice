void Solution::setZeroes(vector<vector<int>> &A) {
  // Do not write main() function.
  // Do not read input, instead use the arguments to the function.
  // Do not print the output, instead return values as specified
  // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for
  // more details
  int n = A.size(), m = A[0].size();
  unordered_set<int> a, b;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (A[i][j] == 0) {
        a.insert(i);
        b.insert(j);
      }
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (a.count(i) or b.count(j))
        A[i][j] = 0;
    }
  }
}