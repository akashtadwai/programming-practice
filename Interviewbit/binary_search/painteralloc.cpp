#include <bits/stdc++.h>
#define ll long long
#define mod 10000003
int Solution::paint(int A, int B, vector<int> &C) {
  int l = *max_element(C.begin(), C.end());
  ll h = accumulate(C.begin(), C.end(), 0LL);
  auto cnt = [&](vector<int> C, int mid) {
    ll numPainters = 0;
    ll sum = 0;
    for (int i = 0; i < C.size(); i++) {
      if (C[i] > mid)
        return false;
      sum += C[i];
      if (sum > mid) {
        numPainters++;
        sum = C[i];
      }
    }
    return (++numPainters) <= A;
  };
  while (l < h) {
    int mid = l + (h - l) / 2;
    // cout<<l<<" "<<h<<" "<<mid<<" "<<cnt(C,mid)<<endl;
    if (cnt(C, mid))
      h = mid;
    else
      l = mid + 1;
  }
  // cout<<ans*B*1LL<<endl;
  return ((l % mod) * 1LL * (B % mod)) % mod;
}