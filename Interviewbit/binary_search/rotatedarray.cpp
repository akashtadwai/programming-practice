int Solution::findMin(const vector<int> &A) {
  // Do not write main() function.
  // Do not read input, instead use the arguments to the function.
  // Do not print the output, instead return values as specified
  // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for
  // more details
  int l = 0, h = A.size();
  int n = A.size();
  while (l <= h) {
    if (A[l] <= A[h])
      return A[l];
    int mid = l + (h - l) / 2;
    int prev = (mid - 1 + n) % n, next = (mid + 1) % n;
    if (A[mid] <= prev and A[mid] <= next)
      return A[mid];
    else if (A[mid] <= A[h])
      h = mid - 1;
    else if (A[mid] >= A[l])
      l = mid + 1;
  }
  return -1;
}
