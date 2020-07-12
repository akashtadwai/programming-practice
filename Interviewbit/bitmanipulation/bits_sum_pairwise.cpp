#define mod 1000000007
int Solution::cntBits(vector<int> &A) {
  int n = A.size();
  long long ans = 0;
  for (int i = 0; i < 32; i++) {
    long long cnt = 0;
    for (int j = 0; j < n; j++) {
      if (A[j] & (1 << i))
        cnt++;
    }
    ans += ((((cnt % mod) * ((n - cnt) % mod)) % mod) * 2LL) % mod;
  }
  return ans % mod;
}
