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
#define vi vector<int>
#define vvi vector<vector<int>>
#define vp vector<ipair>
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
void solve(vector<int> &a) {
a.insert(a.begin(),a[0]);
vi ans(a.size(),1);
int n=a.size();
for (int i = 1; i < n; i++) {
  for (int j = 2 * i; j < n; j += i) {
    if (a[j] > a[i])
      ans[j] = max(ans[j], ans[i] + 1);
  }
}
cout<<*max_element(all(ans))<<endl;
}
void init() {
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    vi a(n);
    fr(i, 0, n) cin >> a[i];
    solve(a);
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
