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
  vector<vector<int>> painting(m, vector<int>(n));
  for (int i = 0; i < m; i++)
    for (int j = 0; j < n; j++)
      cin >> painting[i][j];
  vi finish(m);
  for (int i = 0; i < n; i++) {
    int freetime = 0;
    for (int j = 0; j < m; j++) {
      int st = max(freetime, finish[j]);
      finish[j] = st + painting[j][i];
      freetime = finish[j];
    }
  }
  for (auto x : finish)
    cout << x << " ";
}
int32_t main() {
  IOS;
  init();
  return 0;
}