/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &intervals,
                                  Interval newInterval) {
  // Do not write main() function.
  // Do not read input, instead use the arguments to the function.
  // Do not print the output, instead return values as specified
  // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for
  // more details
  auto comp = [&](Interval a, Interval b) { return a.start < b.start; };
  intervals.push_back(newInterval);
  Interval s;
  sort(intervals.begin(), intervals.end(), comp);
  s.start = intervals[0].start;
  vector<Interval> res;
  s.end = intervals[0].end;
  for (int i = 1; i < intervals.size(); i++) {
    if (intervals[i].start > s.end)
      res.push_back(s), s.start = intervals[i].start, s.end = intervals[i].end;
    else if (intervals[i].end > s.end) {
      s.end = intervals[i].end;
    }
  }
  res.push_back(s);
  return res;
}
