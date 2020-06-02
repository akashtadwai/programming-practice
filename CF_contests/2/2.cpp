#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
#define int long long
#define pb push_back
#define ff first
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
int maxSum(vector<int>arr, int k) {
   
  return res;
}
void init() {
  int T;
  cin >> T;
  while (T--) {
      int sum=0,n;
      cin>>n;
      vector<int>a(n);
      for(int i=0;i<n;i++){
        cin >> a[i];
        sum+=a[i];
      }
      for(int i=1;i<n;i++)  a[i]+=a[i-1];
      int ok = 1;
      int dp[n];
      for(int i=1;i<n;i++){
          dp[i]=maxSum(a,i);
          if(dp[i]>=sum){
              ok=0;
              break;
          }
      } 
      if(ok==1)    cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
