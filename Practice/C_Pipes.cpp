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
  int T;
  cin >> T;
  while (T--) {
    int n;
    string s[2];
    cin >> n >> s[0] >> s[1];
    int row = 0;
    int pos = 0;
    for (pos = 0; pos < n; ++pos) {
      if (s[row][pos] >= '3') {
        if (s[row ^ 1][pos] < '3') {
          break;
        } else {
          row ^= 1;
        }
      }
    }
    if (pos == n && row == 1) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}