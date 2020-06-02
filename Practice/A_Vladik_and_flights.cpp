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
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

void init() {
  int n, a, b;
  cin >> n >> a >> b;
  --a, --b;
  string s;
  cin >> s;
  if (s[a] == s[b]) {
    cout << 0 << endl;
    return;
  }
  int cnt1 = INT_MAX, cnt2 = INT_MAX;
  int i = a+1, j = a-1;
  while (i < n) {
    if (s[i] == s[a])
      i++;
    else {
      cnt1 = i - a;
      break;
    }
  }
  while (j >= 0) {
    if (s[j] == s[a])
      j--;
    else {
      cnt2 = a - j;
      break;
    }
  }
  cout << min(cnt1, cnt2) << endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
