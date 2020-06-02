#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
#define int long long
#define pb push_back
#define ff first
#define INF INT_MAX
#define ss second
#define rep(i, a) for (int i = 0; i < a; i++)
#define FOR(i, j, a) for (int i = j; i < a; i++)
#define cnt_ones(x) __builtin_popcount(x)
#define all(x) x.begin(), x.end()
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
void init() {
  int T;
  cin >> T;
  for (int t = 1; t <= T; t++) {
    string s,ans;cin>>s;
    int cnt=0;
    for(int i=0;i<s.size();i++){
        int digit=s[i]-'0';
        if(cnt<digit)   FOR(j,0,digit-cnt)   ans+='(';
        else    FOR(j,0,cnt-digit) ans+=')';
        cnt=digit;
        ans+=s[i];
    }
    FOR(i,0,cnt)    ans+=')';
    cout<<"Case #"<<t<<": "<<ans<<endl;

  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
