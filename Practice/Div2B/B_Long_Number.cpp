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
  int n;
  cin >> n;
  string s;
  cin >> s;
  vi a(9);
  for (int i = 0; i < 9; i++)
    cin >> a[i];
  for (int i = 0; i < s.size(); i++) {
    int num = s[i] - '0';
    if (a[num - 1] > num) {
      fr(j, i, n) {
        int p = s[j] - '0';
        if (a[p - 1] >= p)
          s[j] = (char)(a[p - 1] + '0');
        else
          break;
      }
      break;
    }
  }
  cout << s << endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
