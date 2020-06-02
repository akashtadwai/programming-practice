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
#define mp make_pair
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
vector<int> pos[26];

void init() {
  int n, m;
  cin >> n;
  string s, t;
  cin >> s;
  for (int i = 0; i < s.size(); i++)
    pos[s[i] - 'a'].pb(i + 1);
  cin >> m;
  while (m--) {
    vector<int> cnt(26);
    cin >> t;
    for (int i = 0; i < t.size(); i++)
      cnt[t[i] - 'a']++;
    int ans = -1;
    for (int i = 0; i < 26; i++) {
      if (cnt[i] > 0)
        ans = max(ans, pos[i][cnt[i] - 1]);
    }
    cout << ans << endl;
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
