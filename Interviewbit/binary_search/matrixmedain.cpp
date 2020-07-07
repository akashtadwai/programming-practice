int Solution::findMedian(vector<vector<int>> &A) {
  int min = A[0][0], max = A[0][0];
  int n = A.size(), m = A[0].size();
  for (int i = 0; i < n; ++i) {
    if (A[i][0] < min)
      min = A[i][0];
    if (A[i][m - 1] > max)
      max = A[i][m - 1];
  }
  int element = (n * m + 1) / 2; // as n*m is odd no. of elements which are <=median is (n*m+1)/2;  
  int ans;
  while (min < max) {
    int mid = min + (max - min) / 2;
    int cnt = 0;
    for (int i = 0; i < n; ++i)
      cnt += upper_bound(A[i].begin(), A[i].end(), mid) - A[i].begin();
    // cout<<min<<" "<<max<<" "<<mid<<" "<<cnt<<endl;
    if (cnt < element)
      min = mid + 1;
    else
      max = mid;
  }
  return min;
}
