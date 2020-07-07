vector<int> Solution::plusOne(vector<int> &A) {
  int carry = 1;
  vector<int> v;
  for (int i = A.size() - 1; i >= 0; --i) {
    int sum;
    sum = A[i] + carry;
    carry = sum / 10;
    v.push_back(sum % 10);
  }
  if (carry)
    v.push_back(carry);
  reverse(v.begin(), v.end());
  int i = 0;
  while (i < v.size() and v[i] == 0)
    v.erase(v.begin());
  //   for(auto x:v)   cout<<x<<" ";
  return v;
}
