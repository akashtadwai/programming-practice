vector<int> Solution::findPerm(const string A, int B) {
  int n = A.size();
  int k = 1;
  vector<int> ans;
  for (int i = 0; i < n; i++) {
    if (A[i] == 'D')
      ans.push_back(B), B--;
    else
      ans.push_back(k), k++;
  }
  ans.push_back(k);
  return ans;
}
