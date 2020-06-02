#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
#define int long long
#define pb push_back
#define ff first
#define INF INT_MAX
#define ss second
#define fr(i, j, k) for (int i = j; i < k; i++)
#define cnt_ones(x) __builtin_popcount(x)
#define all(x) x.begin(), x.end()
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

void init() {
int N,K;
cin>>N>>K;
vector<int>h(N),dp(N,INF);
for(int i=0;i<N;i++) cin>>h[i];
dp[0]=0;
for(int i=0;i<N;i++){
  for(int j=1;j<N+1;j++){
    if(i+j<=N)
      dp[i + j] = min(dp[i + j], K+dp[i] + (h[i] - h[i + j]) * (h[i] - h[i + j]));
  }
}
cout<<dp[N-1];
}
int32_t main() {
  IOS;
  init();
  return 0;
}
