/*int compute(int line, int index){
    if(index == 0)
        return 1;
    else
        return compute(line, index-1)*(line-index+1)/index;
}*/
int compute(int n, int r) {
  vector<int> dp(r + 1);
  dp[0] = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = min(i, r); j > 0; j--) {
      dp[j] += dp[j - 1];
    }
  }
  return dp[r];
}
vector<vector<int>> Solution::solve(int A) {
  vector<vector<int>> tri(A);
  for (int i = 0; i < A; i++) {
    for (int j = 0; j <= i; j++) {
      tri[i].push_back(compute(i, j));
    }
  }

  return tri;
}
