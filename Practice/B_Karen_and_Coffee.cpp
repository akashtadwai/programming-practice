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
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
vi cum(1e6);
void init() {
  int n, k, q, l, r;
  cin >> n >> k >> q;
  while (n--) {
    cin >> l >> r;
    cum[l]++, cum[r + 1]--;
  }
  for (int i = 1; i <= 1e6; i++)
    cum[i] += cum[i - 1];
  for (int i = 1; i <= 1e6; i++)
    cum[i] = cum[i] >= k ? 1 : 0;
  for (int i = 1; i <= 200001; i++)
    cum[i] += cum[i - 1];
  while (q--) {
    cin >> l >> r;
    cout << cum[r] - cum[l - 1] << endl;
  }
}

int32_t main() {
  IOS;
  init();
  return 0;
}