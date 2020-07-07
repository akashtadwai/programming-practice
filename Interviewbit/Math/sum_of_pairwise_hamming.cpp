#define mod 1000000007
int Solution::hammingDistance(const vector<int> &A) {
  int n = A.size();
  int ans = 0;
  int cnt;
  for (int i = 0; i < 32; i++) {
    cnt = 0;
    for (int j = 0; j < n; j++) {
      if ((1 << i) & A[j])
        cnt++;
    }
    int p = (n - cnt) % mod;
    (ans += (2LL * (cnt % mod) * p) % mod) %= mod;
  }
  return ans;
}
