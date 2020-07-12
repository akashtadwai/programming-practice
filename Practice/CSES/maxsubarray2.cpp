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
  int n, a, b;
  cin >> n >> a >> b;
  vi pref(n + 1);
  for (int i = 0; i < n; i++) {
    cin >> pref[i + 1];
    pref[i + 1] += pref[i];
  }
  a = 1, b = n;
  //   for(auto x:pref)  cout<<x<<" ";
  int ans = LLONG_MIN;
  set<pair<int, int>> s;
  for (int i = 0; i <= n; i++) {
    if (i >= a)
      s.insert({pref[i - a], i - a});
    if (s.size())
      ans = max(ans, pref[i] - s.begin()->ff);
    if (i >= b)
      s.erase({pref[i - b], i - b});
  }
  cout << ans << endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
