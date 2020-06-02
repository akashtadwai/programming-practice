#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
#define int long long
#define pb push_back
#define ff first
#define INF INT_MAX
#define ss second
#define rep(i, a) for (int i = 0; i < a; i++)
#define FOR(i, j, a) for (int i = j; i <=a; i++)
#define cnt_ones(x) __builtin_popcount(x)
#define all(x) x.begin(), x.end()
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
void init() {
int T;cin>>T;
while(T--){
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        vector<int>cnt(n);
        for(int i=0;i<m;i++){
            int k;
            cin>>k;
            cnt[k-1]++;
        }
        for(int i=n-1;i>0;i--)
            cnt[i-1]+=cnt[i];
        vector<int>ans(26);
        for(int i=0;i<n;i++){
            ans[s[i]-'a']+=cnt[i];
            ++ans[s[i]-'a'];
        }
        for(auto i:ans) cout<<i<<" ";
        cout<<endl;
}
}
int32_t main() {
  IOS;
  init();
  return 0;
}
