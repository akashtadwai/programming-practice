#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
#define pb push_back
#define ff first
#define INF INT_MAX
#define ss second
#define fr(i, j, a) for (int i = j; i < a; i++)
#define cnt_ones(x) __builtin_popcount(x)
#define all(x) x.begin(), x.end()
#define mp make_pair
#define mod 1000000007
#define vi vector<int>
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

void init() {
    string s;
    cin>>s;
    int l,r;
    int q;cin>>q;
    vector<int>dp(s.size());
    for(int i=1;i<s.size();i++){
        if(s[i-1]==s[i])    dp[i]=dp[i-1]+1;
       else  dp[i]=dp[i-1];
    }
    while(q--){
        cin>>l>>r;
        --l,--r;
        cout<<dp[r]-dp[l]<<endl;
    }
    
}
int32_t main() {
  IOS;
  init();
  return 0;
}
