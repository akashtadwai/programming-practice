int Solution::trailingZeroes(int A) {
  int cnt = 0;
  for (int i = 5; A / i >= 1; i *= 5) {
    cnt += floor(A / i);
  }
  return cnt;
}
