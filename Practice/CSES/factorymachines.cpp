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
void init() {
  int n, t;
  cin >> n >> t;
  vi time(n);
  for (int &i : time)
    cin >> i;
  int lb = 0, rb = 1e18;
  while (lb <= rb) {
    int mid = lb + (rb - lb) / 2;
    int s = 0;
    for (int i = 0; i < n; i++)
      s += min(mid / time[i], t);
    if (s >= t)
      rb = mid - 1;
    else
      lb = mid + 1;
  }
  cout << lb << endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
