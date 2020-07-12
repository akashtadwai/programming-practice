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
  int m, n;
  cin >> m >> n;
  int s = 0;
  vi row(m), col(n);
  vector<vector<int>> grid(m, vector<int>(n));
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> grid[i][j];
      row[i] += grid[i][j];
      s += grid[i][j];
    }
  }
  set<int> r, c;
  for (int j = 0; j < n; j++) {
    for (int i = 0; i < m; i++) {
      col[j] += grid[i][j];
    }
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (grid[i][j]) {
        if (row[i] != n and col[j] != m) {
          cout << "NO" << endl;
          return;
        } else {
          if (row[i] == n and col[j] != m)
            c.insert(j);
          else if (row[i] != n and col[j] == m)
            r.insert(i);
        }
      }
    }
  }
  int sum = 0;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (r.count(i) or c.count(j))
        grid[i][j] = 0;
      sum += grid[i][j];
    }
  }
  if (s != 0 and sum == 0) {
    cout << "NO" << endl;
    return;
  }
  cout << "YES" << endl;

  for (auto i : grid) {
    for (auto j : i)
      cout << j << " ";
    cout << endl;
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}