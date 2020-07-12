void Solution::merge(vector<int> &A, vector<int> &B) {
  // Do not write main() function.
  // Do not read input, instead use the arguments to the function.
  // Do not print the output, instead return values as specified
  // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for
  // more details

  int n = A.size(), m = B.size();
  int i = n - 1, j = m - 1;
  A.resize(n + m);
  int pos = n + m - 1;
  while (j >= 0) {
    if (i >= 0 and A[i] > B[j])
      A[pos--] = A[i--];
    else
      A[pos--] = B[j--];
  }
}
