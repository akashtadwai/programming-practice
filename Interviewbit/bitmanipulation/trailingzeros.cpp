
int Solution::solve(int A) {
  int cnt = 0;
  while (A) {
    if (A % 2 == 1)
      break;
    else
      cnt++;
    A /= 2;
  }
  return cnt;
}