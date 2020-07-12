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
  vi a(n);
  for (int &i : a)
    cin >> i;
  map<int, int> mpa;
  int ans = 1;
  int i = 0, j = 0;
  while (j < n) {
    if (!mpa.count(a[j]))
      mpa[a[j]]++, j++, ans = max(j - i, ans);
    else {
      mpa.erase(a[i]);
      ans = max(ans, j - i);
      i++;
    }
  }
  cout << ans;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
