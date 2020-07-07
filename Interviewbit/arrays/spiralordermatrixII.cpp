vector<vector<int>> Solution::generateMatrix(int A) {
  vector<vector<int>> arr(A, vector<int>(A));
  int t = 0, b = A - 1, l = 0, r = A - 1;
  int dir = 0;
  int k = 1;
  while (l <= r && t <= b) {
    if (dir == 0) {
      for (int i = l; i <= r; i++)
        arr[t][i] = k++;
      t++;
    } else if (dir == 1) {
      for (int i = t; i <= b; i++)
        arr[i][r] = k++;
      r--;
    } else if (dir == 2) {
      for (int i = r; i >= l; i--)
        arr[b][i] = k++;
      b--;
    } else if (dir == 3) {
      for (int i = b; i >= t; i--)
        arr[i][l] = k++;
      l++;
    }
    dir = (dir + 1) % 4;
  }
  return arr;
}
