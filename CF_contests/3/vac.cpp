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
  int N;
  cin>>N;
  vector<int>a[3],dp[3];
  for(int i=0;i<N;i++)
      for(int j=0;j<3;j++)
          cin>>a[i][j];
    dp[0][0]=a[0][0];
    dp[0][1] = a[0][1];
    dp[0][2] = a[0][2];
    for (int k = 1; k < N; ++k) {
      dp[k][0] = a[k][0] + max(dp[k - 1][1], dp[k - 1][2]);
      dp[k][1] = a[k][1] + max(dp[k - 1][0], dp[k - 1][2]);
      dp[k][2] = a[k][2] + max(dp[k - 1][0], dp[k - 1][1]);
    }

    cout << max(dp[N - 1][0], max(dp[N - 1][1], dp[N - 1][2])) << '\n';
}
int32_t main() {
  IOS;
  init();
  return 0;
}
