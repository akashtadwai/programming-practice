vector<int> Solution::lszero(vector<int> &A) {
  int li = 0, ri = INT_MIN, l = 0, r = 0;
  map<int, int> mp;
  int sum = 0;
  mp[0] = -1; // mp[i] index of prefix with sum 'i'
  for (int i = 0; i < A.size(); i++) {
    sum += A[i];
    if (mp.count(sum)) {
      l = mp[sum] + 1;
      r = i;
      if (r - l > ri - li) { // Updating if it is greater
        li = l;
        ri = r;
      }
    } else
      mp[sum] =
          i; // If not found store that sum in map so it can be used further
  }
  vector<int> res;
  if (ri == INT_MIN)
    return res;
  for (int i = li; i <= ri; i++) {
    res.push_back(A[i]);
  }
  return res;
}
