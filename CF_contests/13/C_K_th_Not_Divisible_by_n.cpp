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
int n, k;
void init() {
  int T;
  cin >> T;
  auto fun = [&](int p, int q) { return (p - 1) * n + q; };
  while (T--) {
    cin >> n >> k;
    int p = k / (n - 1);
    int c = k - (n - 1) * p;
    int num = fun(p, n - 1);
    if (c > 0)
      num += (c + 1);
    cout << num << endl;
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
