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
  int n,m;
  cin>>n>>m;
  pair<string,string>p[m];
  string a,b;
  fr(i,0,m){
      cin>>a>>b;
      if(a.size()>b.size())    p[i]={b,a};
      else p[i]={a,b};
  }
  string str[n];
  fr(i,0,n) cin>>str[i];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (p[j].first == str[i] || p[j].second == str[i]) {
        cout << p[j].first << " ";
      }
    }
  }
}
  int32_t main() {
    IOS;
    init();
    return 0;
}
