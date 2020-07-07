#define ll long long

int Solution::sqrt(int A) {
  if (A == 1 or A == 0)
    return A;
  ll l = 1, r = A / 2;
  ll ans;
  while (l < r) {
    ll mid = l + (r - l + 1) / 2;
    if (mid <= A / mid)
      l = mid;
    else
      r = mid - 1;
  }
  return l;
}
