#define mod 1000000007
int Solution::nTriang(vector<int> &A) {
  sort(A.begin(), A.end());
  int n = A.size();
  long long cnt = 0;
  for (int i = n - 1; i >= 0; i--) {
    int l = 0, r = i - 1;
    while (l < r) {
      if (A[l] + A[r] > A[i])
        cnt += (r - l) % mod, r--;
      else
        l++;
    }
  }
  return cnt % mod;
}
