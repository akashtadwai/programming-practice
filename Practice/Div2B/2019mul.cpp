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
#define IOS                                                                 \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
int mod = 2019;
void init() {
string s;cin>>s;
int suff=0;
vi cnt(mod);
cnt[suff]++;
int pot=1;
int ans=0;
int n=s.size();
for(int i=n-1;i>=0;i--){
    int dig=s[i]-'0';
    suff= (suff + pot* dig)%mod;
    pot = 10*pot%mod;
    ans+=cnt[suff];
    cnt[suff]++;
}
cout<<ans<<endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
