string Solution::minWindow(string s, string t) {
  int m = s.size(), n = t.size();
  if (m == 0 or n == 0)
    return "";
  string ans = "";
  int start_index = -1, start = 0, window = INT_MAX, cnt = 0;
  map<char, int> mp, pm;
  for (int i = 0; i < n; i++)
    mp[t[i]]++;
  for (int i = 0; i < m; i++) {
    pm[s[i]]++;
    if (pm[s[i]] <= mp[s[i]] and mp[s[i]] != 0) {
      cnt++;
    }
    if (cnt == n) {
      while (pm[s[start]] > mp[s[start]]) {
        pm[s[start]]--;
        start++;
      }
      int win = i - start + 1;
      if (win < window) {
        window = win;
        start_index = start;
      }
    }
  }
  if (start_index == -1)
    return "";
  return s.substr(start_index, window);
}
