#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
#define int long long
#define pb push_back
#define ff first
#define INF INT_MAX
#define ss second
#define fr(i, j, a) for (int i = j; i < a; i++)
#define cnt_ones(x) __builtin_popcount(x)
#define all(x) x.begin(), x.end()
#define sz size()
#define endl "\n"
#define vi vector<int>
#define vvi vector<vector<int>>
#define vp vector<ipair>
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
void init() {
  int n;
  cin >> n;
  vi a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (i)
      a[i] += a[i - 1];
  }

  int sum = a[n-1];
  if (sum % 3) {
    cout << 0;
    return;
  }
  sum /= 3;
//   for(auto x:a) cout<<x<<" ";
  int num = 0, s = 0, ans = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] == 2 * sum and i<n-1)
      ans += num;
    if (a[i] == sum)
      num++;
  }
  cout << ans << endl;
}

int32_t main() {
  IOS;
  init();
  return 0;
}