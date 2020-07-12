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
    int u, v;
    cin >> u;
    a.pb({u, i + 1});
  }
  sort(all(a));
  for (int i = 0; i < n - 1; i++) {
    int l = i + 1, r = n - 1;
    int sum = 0;
    while (l < r) {
      sum = a[i].ff + a[l].ff + a[r].ff;
      if (sum == x) {
        cout << a[i].ss << " " << a[l].ss << " " << a[r].ss << endl;
        return;
      } else if (sum > x)
        r--;
      else
        l++;
    }
  }
  cout << "IMPOSSIBLE" << endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
