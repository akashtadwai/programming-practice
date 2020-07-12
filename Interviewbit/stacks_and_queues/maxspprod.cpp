#define mod 1000000007
int Solution::maxSpecialProduct(vector<int> &A) {
  int n = A.size();
  vector<int> left(n, 0), right(n, 0);
  stack<int> l;
  stack<int> r;
  l.push(0);
  for (int i = 1; i < n; i++) {
    while (!l.empty()) {
      if (A[l.top()] > A[i])
        break;
      l.pop();
    }
    left[i] = (l.empty()) ? 0 : l.top();
    l.push(i);
  }
  r.push(n - 1);
  for (int i = n - 2; i >= 0; i--) {
    while (!r.empty()) {
      if (A[r.top()] > A[i])
        break;
      r.pop();
    }
    right[i] = (r.empty()) ? 0 : r.top();
    r.push(i);
  }
  long long mx = -1;
  for (int i = 0; i < n; i++) {
    mx = max(((left[i] % mod) * (right[i] % mod) * 1LL) % mod, mx);
  }
  return mx % mod;
}