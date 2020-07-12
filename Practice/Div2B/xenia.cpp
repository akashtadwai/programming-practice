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
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
void init() {
  int n, m;
  cin >> n >> m;
  vector<int> a(m);
  for (int &i : a)
    cin >> i;
  int ans = 0;
  int first = 1;
  for (int i = 0; i < m; i++) {
    if (a[i] < first)
      ans += n - first + a[i];
    else
      ans += a[i] - first;
    first = a[i];
  }
  cout << ans << endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
