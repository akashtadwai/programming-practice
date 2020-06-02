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
int r,x1,y1,x2,y2;
cin>>r>>x1>>y1>>x2>>y2;
double dist= sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
int ans=ceil(dist/(2*r));
cout<<ans<<endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
