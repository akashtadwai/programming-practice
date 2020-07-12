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
  int n;
  cin >> n;
  vector<int> h(n), a(n), cnt(1e6 + 1);
  for (int i = 0; i < n; i++) {
    cin >> h[i] >> a[i];
    cnt[h[i]]++;
  }

  for (int i = 0; i < n; i++) {
    cout << n - 1 + cnt[a[i]] << " " << n - 1 - cnt[a[i]] << endl;
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}