// https://www.spoj.com/problems/NAKANJ/

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
vector<pair<int, int>> directions{{2, 1},   {1, 2},   {-1, 2}, {-2, 1},
                                  {-2, -1}, {-1, -2}, {1, -2}, {2, -1}};
bool isvalid(int r, int c) { return (r >= 0 and r < 8 and c >= 0 and c < 8); }
int bfs(int a, int b, int c, int d) {
  vector<vector<int>> dis(8, vector<int>(8, 1e18)), vis(8, vector<int>(8, 0));
  queue<pair<int, int>> q;
  dis[a][b] = 0;
  q.push({a, b});
  vis[a][b] = 1;
  while (!q.empty()) {
    pair<int, int> tp = q.front();
    q.pop();
    int curx = tp.first;
    int cury = tp.second;
    if (curx == c and cury == d)
      return dis[c][d];
    for (auto dir : directions) {
      int x_next = dir.first + tp.first;
      int y_next = dir.second + tp.second;
      if (isvalid(x_next, y_next) and !vis[x_next][y_next]) {
        vis[x_next][y_next] = 1;
        dis[x_next][y_next] = dis[curx][cury] + 1;
        q.push({x_next, y_next});
      }
    }
  }
}
void init() {
  int T;
  cin >> T;
  char a, c;
  int b, d;
  while (T--) {
    cin >> a >> b >> c >> d;
    cout << bfs(a - 'a', b - 1, c - 'a', d - 1) << endl;
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
