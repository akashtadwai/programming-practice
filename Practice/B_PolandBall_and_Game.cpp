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
#define vi vector<int>
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
void init() {
  int n, m;
  cin >> n >> m;
  vector<string> a(n), b(m);
  fr(i, 0, n) cin >> a[i];
  fr(i, 0, m) cin >> b[i];
  if (n > m)
    cout << "YES" << endl;
  else if (n < m)
    cout << "NO" << endl;
  else {
    int cnt=0;
    for (auto x = a.begin(); x != a.end(); x++) {
      for (auto y = b.begin(); y != b.end(); y++) {
        if (*x == *y)
          cnt++;
      }
    }
    if (cnt & 1)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
