int Solution::removeDuplicates(vector<int> &nums) {
  // Do not write main() function.
  // Do not read input, instead use the arguments to the function.
  // Do not print the output, instead return values as specified
  // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for
  // more details
  int k = 0;
  for (int num : nums) {
    if (k < 2 || nums[k - 2] < num) {
      nums[k++] = num;
    }
  }
  return k;
}
