#define mod 1000003
int fact(int n) {
  if (n == 0 || n == 1)
    return 1;
  else
    return (n * fact(n - 1)) % mod;
}
int Solution::findRank(string A) {
  string s = A;
  int ans = 0;
  int n = s.length();
  for (int i = 0; i < n - 1; i++) {
    int count = 0;
    for (int j = i + 1; j < n; j++)
      if (s[j] < s[i])
        count++;

    ans += (count * fact(n - i - 1)) % mod;
  }

  return (ans + 1) % mod;
}