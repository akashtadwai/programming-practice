void Solution::sortColors(vector<int> &A) {
  // Do not write main() function.
  // Do not read input, instead use the arguments to the function.
  // Do not print the output, instead return values as specified
  // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for
  // more details
  int n = A.size();
  int i = 0, j = 0, k = n;
  int mid = 1;
  while (j < k) {
    if (A[j] < mid) {
      swap(A[j], A[i]);
      i++;
      j++;
    } else if (A[j] > mid) {
      k--;
      swap(A[j], A[k]);
    } else
      j++;
  }
}
