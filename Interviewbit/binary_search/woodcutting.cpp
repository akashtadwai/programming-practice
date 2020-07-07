bool isValid(int mid, vector<int> &a, int B) {
  int cnt = 0;
  for (int i = 0; i < a.size(); i++) {
    if (a[i] > mid)
      cnt += a[i] - mid;
    if (cnt >= B)
      return true;
  }
  return cnt >= B;
}

int Solution::solve(vector<int> &A, int B) {
  int l = 0;
  int h = *max_element(A.begin(), A.end());
  while (l < h) {
    int mid = l + (h - l + 1) / 2;
    // cout<<l<<" "<<mid<<" "<<h<<endl;
    if (isValid(mid, A, B))
      l = mid;
    else
      h = mid - 1;
  }
  return l;
}
