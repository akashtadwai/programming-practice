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
 string s;cin>>s;
 int n=s.size();
 int val=0;
 int  k; cin>>k;
 vi a(26);
 fr(i,0,26) cin>>a[i];
 int mx=*max_element(all(a));
 for(int i=0;i<s.size();i++)
     val+=(i+1)*a[s[i]-'a'];

while(k>0){
    val+=(++n)*mx;
    k--;
}
cout<<val<<endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
