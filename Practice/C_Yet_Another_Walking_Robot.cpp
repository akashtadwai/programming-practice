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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l=-1,r=n;
    map<pair<int, int>, int> mp;
    pair<int, int> cur = {0, 0};
    mp[cur] = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == 'L')
        --cur.first;
      if (s[i] == 'R')
        ++cur.first;
      if (s[i] == 'U')
        ++cur.second;
      if (s[i] == 'D')
        --cur.second;
    if(mp.count(cur)){
      if (i - mp[cur] < r - l)
        l=mp[cur],r=i;
    }
    mp[cur]=i+1;
    }
    if(l==-1)   cout<<-1<<endl;
    else cout<<l+1<<" "<<r+1<<endl;
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
