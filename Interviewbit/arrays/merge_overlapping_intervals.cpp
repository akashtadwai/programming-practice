/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::merge(vector<Interval> &A) {
  // Do not write main() function.
  // Do not read input, instead use the arguments to the function.
  // Do not print the output, instead return values as specified
  // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for
  // more details
  vector<Interval> res;
  auto comp = [&](Interval a, Interval b) { return a.start < b.start; };
  vector<Interval> ans;
  sort(A.begin(), A.end(), comp);
  Interval s;
  int i = 1;
  s.start = A[0].start;
  s.end = A[0].end;
  while (i < A.size()) {
    if (A[i].start > s.end) {
      ans.push_back(s);
      s.start = A[i].start;
      s.end = A[i].end;
    } else if (A[i].end > s.end)
      s.end = max(A[i].end, s.end);
    i++;
  }
  ans.push_back(s);
  return ans;
}
