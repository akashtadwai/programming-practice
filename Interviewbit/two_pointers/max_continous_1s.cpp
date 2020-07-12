vector<int> Solution::maxone(vector<int> &A, int m) {
  int wl = 0, wr = 0;
  int zc = 0, best = -1;
  int l = 0, r = 0;
  int n = A.size();
  while (wr < n) {
    if (zc <= m) {
      if (A[wr] == 0)
        zc++;
      wr++;
    }
    if (zc > m) {
      if (A[wl] == 0)
        zc--;
      wl++;
    }
    if (wr - wl > best) {
      best = wr - wl;
      l = wl;
      r = wr;
    }
  }
  vector<int> res;
  for (int i = l; i < r; i++)
    res.push_back(i);
  return res;
}
