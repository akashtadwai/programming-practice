#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
// #define int long long
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
  int k;
  cin >> k;
  string a, b;
  cin >> a >> b;
  int n = a.size();
  int r=0;
  for (int i = 0; i < n - 1; ++i) {
    if (a[i] != a[i + 1] && a[i] != b[i] && b[i] != b[i + 1]) {
      swap(a[i], a[i + 1]);
      ++r;
    }
  }
  for (int i = 0; i < n; ++i)
    if (a[i] != b[i])
      ++r;
  cout << r;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
