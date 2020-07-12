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
  int n;
  cin >> n;
  vi a(n);
  for (int &i : a)
    cin >> i;
  vi modk(n + 1);
  int s = 0;
  for (int i = 0; i < n; i++) {
    s += a[i];
    modk[((s % n) + n) % n]++;
  }
  int ans = 0;
  for (int x : modk) {
    if (x > 1)
      ans += (x * (x - 1)) / 2;
  }
  cout << ans + modk[0];
}
int32_t main() {
  IOS;
  init();
  return 0;
}
