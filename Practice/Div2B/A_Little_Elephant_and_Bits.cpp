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
vector<int> g[1000000];
vector<int> d(1000000);
vector<int> sz(1000000);

void init() {
string a;cin>>a;
int index;
int n=a.size();
for(int i=0;i<a.size();i++) {
    if(a[i]=='0')  {
      index = i;
      break;
      if(i==n-1)    index=n-1;
    } 
}
// cout << index << endl;
cout << a.substr(0, index) << a.substr(index + 1, n) << endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
