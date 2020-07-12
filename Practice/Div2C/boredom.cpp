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
#define endl "\n"
#define vi vector<int>
#define vvi vector<vector<int>>
#define vp vector<ipair>
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
void init() {
  int n;
  cin >> n;
  vi a(n), cnt(1e5);
  for (int &i : a)
    cin >> i;
  for (auto x : a)
    cnt[x]++;
  vector<int> dp(1e5 + 1);
  dp[1] = cnt[1];
  for (int i = 2; i <= *max_element(all(a)); i++)
    dp[i] = max(dp[i - 1], dp[i - 2] + i * cnt[i]);
  cout << *max_element(all(dp)) << endl;


}

int32_t main() {
  IOS;
  init();
  return 0;
}