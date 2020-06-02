#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
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
vector<int> primes{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
void init() {
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    int ans = 0;
    vector<int> a(n), color(n);
    fr(i, 0, n) cin >> a[i];
    vector<int> vis(n+11);
    int now = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < 11; j++) {
        if (a[i] % primes[j] == 0) {
          if (vis[j]==0)
            vis[j] = ++now;
          color[i] = vis[j];
          break;
        }
      }
    }
    cout << now << endl;
    for (auto i : color)
      cout << i << " ";
    cout << endl;
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}