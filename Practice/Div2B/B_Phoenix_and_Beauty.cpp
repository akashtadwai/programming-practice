#include <bits/stdc++.h>
using namespace std;
int main() {
  int T;
  cin >> T;
  while (T--) {
    int p;
    int n, k;
    cin >> n >> k;
    set<int> s;
    for (int i = 0; i < n; i++) {
      cin >> p;
      s.insert(p);
    }
    if (s.size() > k)
      cout << -1 << endl;
    else {
      cout << n * k << endl;
      for (int i = 0; i < n; i++) {
        for (auto x : s)
          cout << x << " ";
        for (int i = 0; i < k - s.size(); i++)
          cout << 1 << " ";
      }
      cout << endl;
    }
  }
  return 0;
}