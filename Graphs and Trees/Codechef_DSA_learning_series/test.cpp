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
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
int32_t main() {
  vector<pair<int, int>> ans{{1, 2}};
  auto comp = [&](pair<int, int> &a, pair<int, int> &b) {
    return (((a.ff * 1.0) / a.ss) > ((b.ff * 1.0) / b.ss));
  };
  sort(all(ans), comp);
  cout << ans[0].ss << " " << ans[0].ff << endl;
}