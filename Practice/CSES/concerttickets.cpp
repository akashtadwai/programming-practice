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
  int n, m;
  cin >> n >> m;
  set<pair<int, int>> s;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    s.insert({a, i});
  }
  for (int i = 0; i < m; i++) {
    int t;
    cin >> t;
    auto it = s.lower_bound({t + 1, 0});
    if (it == s.begin())
      cout << -1 << endl;
    else {
      --it;
      cout << (*it).first << endl;
      s.erase(it);
    }
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
