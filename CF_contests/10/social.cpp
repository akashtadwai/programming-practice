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
void init() {
  int T;
  cin >> T;
  while (T--) {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    set<int> q;
    for (int i = 0; i < (int)s.size(); i++) {
      if (s[i] == '1')
        q.insert(i);
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == '0') {
        auto it = q.lower_bound(i - k);
        if (it == q.end() or (*it > i + k)) {
          s[i] = '1';
          ans++;
          q.insert(i);
        }
      }
    }
    cout << ans << endl;
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
