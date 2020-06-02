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

void init() {
string s,t;
cin>>s>>t;
int cnt=0;
string ans;
for(int i=0;i<s.size();i++){
    if(s[i]==t[i]) {
        ans+=s[i];
        continue;
    }
    if(cnt>=0) {
      ans += s[i];
      cnt--;
    }
    else ans+=t[i],cnt++;   
}
if(cnt!=0)  cout<<"impossible"<<endl;
else cout<<ans<<endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
