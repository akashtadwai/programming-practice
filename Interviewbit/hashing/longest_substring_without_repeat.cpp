int Solution::lengthOfLongestSubstring(string A) {
  map<char, int> mp;
  int n = A.size();
  int i = 0, j = 0;
  int ans = 1;
  while (i < n and j < n) {
    if (!mp.count(A[j])) {
      mp[A[j]]++;
      j++;
      ans = max(ans, j - i);
    } else
      mp.erase(A[i]), i++;
  }
  return ans;
}
