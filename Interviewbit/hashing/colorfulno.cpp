int Solution::colorful(int A) {
  if (A == 0)
    return 0;
  vector<int> a;
  while (A) {
    a.insert(a.begin(), A % 10);
    A /= 10;
  }
  set<long long> s;
  for (int i = 0; i < a.size(); i++) {
    long long value = 1;
    for (int j = i; j < a.size(); j++) {
      value *= a[j];
      if (s.count(value))
        return 0;
      s.insert(value);
    }
  }
  return 1;
}
