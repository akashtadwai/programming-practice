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
vector<int> a, b, c, d;
bool isValid(int t) {
  for (int i = 0; i < c.size(); i++) {
    for (int j = 0; j < a.size(); j++) {
      if ((c[i] + t >= a[j] and c[i] + t <= b[j]) or
          (d[i] + t >= a[j] and d[i] + t <= b[j]) or
          (c[i] + t <= a[j] and d[i] + t >= b[j]))
        return true;
    }
  }
  return false;
}
void init() {
  int p, q, l, r;
  cin >> p >> q >> l >> r;
  int ans = 0;
  a.resize(p), b.resize(p);
  for (int i = 0; i < p; i++)
    cin >> a[i] >> b[i];
  c.resize(q), d.resize(q);
  for (int i = 0; i < q; i++)
    cin >> c[i] >> d[i];

  for (int i = l; i <= r; i++) {
    if (isValid(i))
      ans++;
  }
  cout << ans << endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}