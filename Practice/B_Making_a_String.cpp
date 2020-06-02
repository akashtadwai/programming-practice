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
#define vi vector<int>
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

void init() {
  int n;
  cin >> n;
  vi a(n);
  fr(i, 0, n) cin >> a[i];
  sort(all(a), greater<int>());
  for (int i = 1; i < n; i++) {
    if (a[i] == a[i - 1])
      a[i]--;
    else if (a[i] > a[i - 1])
      a[i] = a[i - 1] - 1;
    if (a[i] < 0)
      a[i] = 0;
  }
  int ans = accumulate(all(a), 0);
  cout << ans << endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
