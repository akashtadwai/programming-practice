string Solution::largestNumber(const vector<int> &A) {
  vector<string> a(A.size());
  for (int i = 0; i < A.size(); i++) {
    a[i] = to_string(A[i]);
  }
  auto comp = [&](string a, string b) { return a + b > b + a; };
  sort(a.begin(), a.end(), comp);
  string ans = "";
  for (auto x : a)
    ans += x;
  if (ans[0] == '0')
    return "0";
  return ans;
}
