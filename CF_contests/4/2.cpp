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
  int n;cin>>n;
  vector<int>b(n),a(n);
  for(int i=0;i<n;i++)  cin>>b[i];
  int max_so_far=0,curr_max=LONG_MIN;
  a[0]=b[0];
  curr_max = 0;
  for (int i = 1; i < n; i++){
    curr_max = max(a[i - 1], curr_max);
    max_so_far = max(max_so_far, curr_max);
    a[i] = b[i] + max_so_far;
  }
  for(auto i:a)cout<<i<<" ";
}
int32_t main() {
  IOS;
  init();
  return 0;
}
