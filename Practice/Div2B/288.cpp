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
void init() {
  string s;
  cin >> s;
  int n = s.length(), i;
  int p = s[n - 1] - '0';
  for (i = 0; i < n; i++) {
    int x = s[i] - '0';
    if (x % 2 == 0 && x < p) {
      swap(s[n - 1], s[i]);
      cout << s;
      exit(0);
    }
  }

  for (i = n - 2; i >= 0; i--) {
    if ((s[i] - '0') % 2 == 0) {
      swap(s[n - 1], s[i]);
      cout << s;
      exit(0);
    }
  }

  cout << "-1";
}
int32_t main() {
  IOS;
  init();
  return 0;
}
