int Solution::pow(int x, int n, int d) {
  long long res = 1;
  x = x % d;
  if (n == 0)
    return 1 % d;
  if (x == 0)
    return 0;
  while (n) {
    if (n & 1)
      (res *= (x % d)) %= d;
    // cout<<res<<endl;
    n >>= 1;
    (x *= (x % d)) %= d;
  }
  // cout<<res<<endl;
  if (res < 0)
    res += d;
  return res;
}
