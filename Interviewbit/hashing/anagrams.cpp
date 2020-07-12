vector<vector<int>> Solution::anagrams(const vector<string> &A) {
  vector<vector<int>> res;
  map<string, vector<int>> mp;
  int n = A.size();
  for (int i = 0; i < n; i++) {
    string str = A[i];
    sort(str.begin(), str.end());
    mp[str].push_back(i + 1);
  }
  for (auto pp : mp)
    res.push_back(pp.second);
  return res;
}
