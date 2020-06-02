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
vi cum(1e6);
void init() {
  int p, n, x, r;
  cin >> n >> p;
  while (n--) {
    cin >> x >> r;
    cum[max(0LL, x - r)]++, cum[min(p, x + r + 1)]--;
  }
  int cnt = 0;
  for (int i = 1; i <= p; i++)
    cum[i] += cum[i - 1];
  int i = 0, j = 0;
  for (int i = 0; i <= p; i++) {
    j = i;
    while (j <= p and (cum[j] > 1 or cum[j] <= 0))
      j++;
    cnt = max(cnt, j - i);
    i = j;
  }
  cout << cnt << endl;
}

int32_t main() {
  IOS;
  init();
  return 0;
}