// https://www.spoj.com/problems/ABCPATH/

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
int vis[55][55];
char grid[55][55];
int n, m, mx = 0;
vector<pair<int, int>> directions{{0, 1},  {1, 1},   {1, 0},  {-1, 1},
                                  {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};
bool isvalid(int r, int c) { return (r >= 0 and r < n and c >= 0 and c < m); }
void dfs(int i, int j, char curr) {
  vis[i][j] = 1;
  char next = curr + 1;
  mx = max(mx, 1LL * (curr - 'A' + 1));
  if (curr == 'Z')
    return;
  for (auto dir : directions) {
    int x_next = dir.first + i;
    int y_next = dir.second + j;
    if (isvalid(x_next, y_next) and !vis[x_next][y_next] and
        grid[x_next][y_next] == next)
      dfs(x_next, y_next, next);
  }
}
void init() {
  int x = 1;
  while (1) {
    cin >> n >> m;
    if (n == 0 and m == 0)
      break;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> grid[i][j];
      }
      
    }
    mx = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (grid[i][j] == 'A') {
          memset(vis, 0, sizeof(vis));
          dfs(i, j, 'A');
        }
      }
    }
    cout << "Case " << x << ": " << mx << endl;
    x++;
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
