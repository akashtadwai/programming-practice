int Solution::removeDuplicates(vector<int> &arr) {
  // Do not write main() function.
  // Do not read input, instead use the arguments to the function.
  // Do not print the output, instead return values as specified
  // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for
  // more details
  int k = 0;
  for (int num : arr) {
    if (k < 1 or arr[k - 1] < num)
      arr[k++] = num;
  }
  return k;
}
