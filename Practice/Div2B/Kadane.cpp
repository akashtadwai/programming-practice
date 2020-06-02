#include <bits/stdc++.h>
using namespace std;
void kadane(vector<int> a) {
  int max_ending_here = 0, max_so_far = INT_MIN, li = 0, l = 0, r = 0;
  for (int i = 0; i < a.size(); i++) {
    max_ending_here += a[i];
    if (max_so_far < max_ending_here) {
      li = l;
      r = i;
      max_so_far = max_ending_here;
    }
    if (max_ending_here < 0) {
      max_ending_here = 0;
      l = i + 1;
    }
  }

  /*for (int i = 0; i < a.size(); i++) {
    max_ending_here += a[i];
    max_so_far=max(max_ending_here,max_so_far);
    max_ending_here=max(0,max_ending_here);
  }*/
  cout << li + 1 << " " << r + 1 << " " << max_so_far << endl;
}
int main() {
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];
    kadane(a);
  }
}