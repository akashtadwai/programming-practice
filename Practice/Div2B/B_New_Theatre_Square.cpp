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
void init() {
  int T;
  cin >> T;
  while (T--) {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    vector<vector<char>> a(n, vector<char>(m));
    int wc = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> a[i][j];
        if (a[i][j] == '.')
          wc++;
      }
    }
    if (2 * x <= y)
      cout << wc * x << endl;
    else {
      int res = 0;
      for (int i = 0; i < n; i++) {
        int yc = 0, wc = 0;
        for (int j = 0; j < m; j++) {
          if (j < m - 1 and a[i][j] == '.' and a[i][j] == a[i][j + 1])
            j++, yc++;
          else if (a[i][j] == '.')
            wc++;
        }
        res += yc * y + wc * x;
      }

      cout << res << endl;
    }
  }
}

int32_t main() {
  IOS;
  init();
  return 0;
}