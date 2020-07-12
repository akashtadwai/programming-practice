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
int n, m;
int cnt = 0;
vector<pair<int, int>> directions{{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
bool isvalid(int i, int j) { return (i >= 0 and i < n and j >= 0 and j < m); }
void dfs(int i, int j, vector<vector<int>> &adj, vector<vector<bool>> &vis) {
  cnt++;
  vis[i][j] = true;
  for (auto dir : directions) {
    int x_next = i + dir.ff;
    int y_next = j + dir.ss;
    if (isvalid(x_next, y_next) and adj[x_next][y_next] == adj[i][j] and
        !vis[x_next][y_next])
      dfs(x_next, y_next, adj, vis);
  }
}
void init() {
  cin >> n >> m;
  vector<vector<int>> adj(n, vector<int>(m, 0));
  vector<vector<bool>> vis(n, vector<bool>(m, false));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> adj[i][j];
    }
  }
  int max_cnt = INT_MIN, strength;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++)
      if (!vis[i][j]) {
        cnt = 0;
        dfs(i, j, adj, vis);
        if (cnt > max_cnt) {
          max_cnt = cnt;
          strength = adj[i][j];
        } else if (max_cnt == cnt and strength > adj[i][j]) {
          strength = adj[i][j];
        }
      }
  }
  cout << strength << " " << max_cnt << endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
