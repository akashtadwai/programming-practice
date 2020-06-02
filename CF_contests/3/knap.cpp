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
  int N,W;
  cin>>N>>W;
  vector<int>val(N),wt(N);
  int dp[N+1][W+1];
  for(int i=0;i<N;i++)
      cin>>wt[i]>>val[i];
  for(int i=0;i<=N;i++){
      for(int w=0;w<=W;w++){
          if(i==0 or w==0)  dp[i][w]=0;
          else if(wt[i-1]<=w)
            dp[i][w] = max(val[i - 1] + dp[i - 1][w - wt[i - 1]], dp[i - 1][w]);
          else
            dp[i][w] = dp[i - 1][w];
      }
  }
  cout<<dp[N][W];


}
int32_t main() {
  IOS;
  init();
  return 0;
}
