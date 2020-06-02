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
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
int f, src, dest, up, down, curr, nup, ndown;
vector<int> dist(1000001);
vector<bool> vis(1000001);
void bfs() {
  queue<int> q;
  vis[src] = true;
  dist[src] = 0;
  q.push(src);
  while (!q.empty()) {
    curr = q.front();
    q.pop();
    nup = curr + up;
    ndown = curr - down;
    if (nup <= f and !vis[nup]) {
      vis[nup] = true;
      dist[nup] = dist[curr] + 1;
      q.push(nup);
    }
    if (ndown >= 1 and !vis[ndown]) {
      vis[ndown] = true;
      dist[ndown] = dist[curr] + 1;
      q.push(ndown);
    }
  }
}
void init() {
  cin >> f >> src >> dest >> up >> down;
  dist[dest]=-1;
  bfs();
  if(dist[dest]==-1)
    cout << "use the stairs";
  else cout<<dist[dest];
}
int32_t main() {
  IOS;
  init();
  return 0;
}
