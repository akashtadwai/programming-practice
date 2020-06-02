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
int n;cin>>n;vi a(n);
fr(i,0,n)   cin>>a[i];
vector<int>dp(n+1);  // dp[i]- LIS up to length i
for(int i=0;i<n;i++){
    dp[i]=1;
    for(int j=0;j<i;j++){
        if(a[i]>a[j])   dp[i]=max(dp[i],1+dp[j]);
    }
}
cout<<*max_element(all(dp))<<endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
