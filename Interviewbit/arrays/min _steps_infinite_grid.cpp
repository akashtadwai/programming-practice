int Solution::coverPoints(vector<int> &A, vector<int> &B) {
  int disx = A[0], disy = B[0];
  int cnt = 0;
  for (int i = 1; i < A.size(); i++) {
    cnt += max(abs(A[i] - disx), abs(B[i] - disy));
    disx = A[i];
    disy = B[i];
  }
  return cnt;
}