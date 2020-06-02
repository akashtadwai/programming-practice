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
void init() {
    int n;string s;
    string res;
  cin >> n >> s;
  for (int i = 0; i < n; i++) {
    if (res.size() % 2 == 0 || res.back() != s[i])
      res.push_back(s[i]);
  }
  if (res.size() % 2 == 1)
    res.pop_back();
  cout << n - res.size() << endl << res << endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
