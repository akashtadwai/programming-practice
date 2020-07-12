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
#define vi vector<int>
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
int solve(vector<int> a, int ec, int oc) {
  int n = a.size();
  if (oc > ec)
    return -1;
  else if (ec > oc + 1)
    return -1;
  else {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
      if (((i & 1) ^ (a[i] & 1)))
        cnt++;
    }
    return cnt / 2;
  }
}
void init() {
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    vi a(n);
    int oc = 0, ec = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] & 1)
        oc++;
      else
        ec++;
    }
    cout << solve(a, ec, oc) << endl;
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
