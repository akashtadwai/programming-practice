#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, target;
  cin >> n >> target;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int l = 0, h = n;
  while (l < h) {
    int mid = l + (h - l) / 2;
    if (arr[mid] >= target)
      h = mid;
    else
      l = mid + 1;
  }
  auto it = lower_bound(arr.begin(), arr.end(), target) - arr.begin();
  cout << l << " " << it << endl;
  l = 0, h = n;
  while (l < h) {
    int mid = l + (h - l + 1) / 2;
    if (arr[mid] <= target)
      l = mid;
    else
      h = mid - 1;
  }
  it = upper_bound(arr.begin(), arr.end(), target) - arr.begin();
  cout << l + 1 << " " << it << endl;
}