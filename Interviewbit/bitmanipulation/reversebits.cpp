unsigned int Solution::reverse(unsigned int A) {
  // Do not write main() function.
  // Do not read input, instead use the arguments to the function.
  // Do not print the output, instead return values as specified
  // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for
  // more details

  int i = 31;
  long long res = 0;
  while (A) {
    long long t = pow(2, i);
    res += t * (A % 2);
    i--;
    A /= 2;
  }
  return res;
}
