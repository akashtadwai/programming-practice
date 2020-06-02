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
  int n;
  cin>>n;
  vi a(7);
  fr(i,0,7) cin>>a[i];
  vi pre(all(a));
  int sum=accumulate(all(a),0);
  int rem=n%sum;
  if(rem==0){
    cout<<7<<endl;
    return;
  }
  fr(i,1,7) pre[i]+=pre[i-1];
  int ind= lower_bound(all(pre),rem)-pre.begin();
  cout<<ind+1<<endl;


}
int32_t main() {
  IOS;
  init();
  return 0;
}
