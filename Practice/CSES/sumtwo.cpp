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
#define vi vector<int>
#define vvi vector<vector<int>>
#define vp vector<ipair>
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
void init() {
  int n, x;
  cin >> n >> x;
  vector<pair<int, int>> a;
  for (int i = 0; i < n; i++) {
    int k;
    cin >> k;
    a.pb({k, i});
  }
  sort(all(a));
  int i = 0, j = n - 1;
  while (i < j) {
    if (a[i].ff + a[j].ff == x) {
      cout << a[i].ss + 1 << " " << a[j].ss + 1;
      return;
    } else if (a[i].ff + a[j].ff > x)
      j--;
    else
      i++;
  }
  if (i == j)
    cout << "IMPOSSIBLE";
}
int32_t main() {
  IOS;
  init();
  return 0;
}
