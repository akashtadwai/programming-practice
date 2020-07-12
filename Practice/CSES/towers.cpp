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
  int x, n, a[200002];
  set<int> s;
  multiset<int> m;
  cin >> x >> n;
  s.insert(0);
  s.insert(x);
  for (int i = 1; i <= n; ++i) {
    cin >> a[i];
    auto l = s.lower_bound(a[i]), r = --s.upper_bound(a[i]);
    // cout << *l << " " << *r << endl;
    if (*l > a[i])
      --l;
    if (*r < a[i])
      ++r;
    auto f = m.find(*r - *l);
    if (f != m.end())
      m.erase(f);
    m.insert(a[i] - *l);
    m.insert(*r - a[i]);
    s.insert(a[i]);
    // for(auto x:m)   cout<<x<<" ";
    // cout<<endl;
    cout << *--m.end() << ' ';
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
