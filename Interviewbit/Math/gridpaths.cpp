int Solution::uniquePaths(int A, int B) {
  vector<vector<int>> dp(A + 1, vector<int>(B + 1));
  dp[0][0] = 1;
  for (int i = 0; i <= A; i++) {
    for (int j = 0; j <= B; j++) {
      if (i)
        dp[i][j] += dp[i - 1][j];
      if (j)
        dp[i][j] += dp[i][j - 1];
    }
  }
  return dp[A - 1][B - 1];
}
