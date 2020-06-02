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
#define vvi vector<vector<int>>
#define vp vector<ipair>
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
void init() {
  int n;
  cin >> n;
  vi a(n);
  fr(i, 0, n) cin >> a[i];
  vi dp(n);
  int ans = 1;
  int cnt1=1,cnt2=1;
  fr(i,1,n) if(a[i]<=a[0])  cnt1++;
  for(int j=n-2;j>=0;j--) if (a[j] <= a[n-1]) cnt2++;

  fr(i, 1, n-1) {
    int cnt = 0;
    fr(j, i+1, n-1) {
      if (a[j] <= a[i])
        cnt++;
      else
        break;
    }
    for (int j = i-1; j >= 0; j--) {
      if (a[j] <= a[i])
        cnt++;
      else
        break;
    }
    ans = max(ans, cnt);

  }
  ans = max({ans, cnt1, cnt2});
  cout << ans << endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
