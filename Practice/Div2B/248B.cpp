#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
#define int long long
#define pb push_back
#define ff first
#define INF INT_MAX
#define ss second
#define rep(i, a) for (int i = 0; i < a; i++)
#define fr(i, j, a) for (int i = j; i < a; i++)
#define cnt_ones(x) __builtin_popcount(x)
#define all(x) x.begin(), x.end()
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
  vi a(n);
  fr(i, 0, n) cin >> a[i];
  vi pre(a.begin(), a.end());
  vi pres(a.begin(), a.end());
  fr(i, 1, n) pre[i] += pre[i - 1];
  sort(all(a));
  fr(i, 1, n) pres[i] += pres[i - 1];
  int m;
  cin >> m;
  while (m--) {
    int type, l, r;
    cin >> type >> l >> r;
    --l, --r;
    switch (type) {
    case 1:
      if (l == 0)
        cout << pre[r] << endl;
      else
        cout << pre[r] - pre[l - 1] << endl;
        break;


    case 2:
      if (l == 0)
        cout << pres[r] << endl;
      else
        cout << pres[r] - pres[l - 1] << endl;
        break;
    }
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
