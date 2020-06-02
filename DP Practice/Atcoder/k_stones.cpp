// https://atcoder.jp/contests/dp/tasks/dp_k

#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
#define int long long
#define pb push_back
#define ff first
#define INF INT_MAX
#define ss second
#define fr(i, j, a) for (int i = j; i < a; i++)
#define cnt_ones(x) __builtin_popcount(x)
#define all(x) x.begin(), x.end()
#define sz size()
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
  int n,k;cin>>n>>k;
  vector<int>stones(n);
  vector<bool>dp(k+1); // dp[i]- true if first player wins and there are i stones remainiing
  for(int i=0;i<n;i++)  cin>>stones[i];
  for(int x=0;x<=k;x++){
    for(int k: stones){
      if(x-k>=0 and !dp[x-k]) dp[x]=true; // if first player takes k stones, x-k are remaining and to first player to win dp[x-k] should be false
    }
  }
  dp[k]?cout<<"First":cout<<"Second"<<endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
