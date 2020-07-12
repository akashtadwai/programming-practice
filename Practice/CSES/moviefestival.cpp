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
  int n;
  cin >> n;
  auto comp = [&](pair<int, int> &a, pair<int, int> &b) { return a.ss < b.ss; };
  vector<pair<int, int>> time;
  for (int i = 0; i < n; i++) {
    int u, v;
    cin >> u >> v;
    time.pb({u, v});
  }
  int ans = 0;
  int finish = INT_MIN;
  sort(all(time), comp);
  for (int i = 0; i < n; i++) {
    if (time[i].ff >= finish) {
      ans++;
      finish = time[i].ss;
    }
  }
  cout << ans << endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
