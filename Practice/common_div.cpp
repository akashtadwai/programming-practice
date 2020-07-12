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
  string a, b;
  cin >> a >> b;
  set<int> c, d;
  vector<char> cnt(26);
  int len1 = 0, len2 = 0;
  for (int i = 0; i < a.size(); i++) {
    if (cnt[a[i] - 'a']) {
      len1 = i;
      break;
    } else
      cnt[a[i] - 'a']++;
  }
  int p = a.size() / len1;
  c.insert(len1);
  while (p % 2 == 0) {
    c.insert(len1 * p);
    p /= 2;
  }
  cnt.clear();
  for (int i = 0; i < b.size(); i++) {
    if (cnt[b[i] - 'a']) {
      len1 = i;
      break;
    } else
      cnt[a[i] - 'a']++;
  }
  int q = b.size() / len1;
  d.insert(len1);
  while (q % 2 == 0) {
    d.insert(len1 * q);
    q /= 2;
  }
  a = c.size(), b = d.size();
  for(auto x:c )    cout<<x<<" ";
  if (b > a)
    swap(c, d);
  int ans = 0;
  for (auto it : c) {
    if (d.count(it))
      ans++;
  }
  cout << ans << endl;
}

int32_t main() {
  IOS;
  init();
  return 0;
}