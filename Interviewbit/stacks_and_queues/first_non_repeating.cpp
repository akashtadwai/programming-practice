#define all(x) x.begin(), x.end()
string Solution::solve(string A) {
  int n = A.size();
  string res = "";
  queue<char> q;
  map<char, int> mp;
  for (int i = 0; i < n; i++) {
    if (!mp.count(A[i]))
      q.push(A[i]);
    mp[A[i]]++;
    while (!q.empty() and mp[q.front()] > 1)
      q.pop();
    if (q.empty())
      res += "#";
    else
      res += q.front();
  }
  return res;
}
