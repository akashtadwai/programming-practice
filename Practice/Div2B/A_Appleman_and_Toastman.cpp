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
#define vi vector<long long>
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
  int score=0;
  sort(all(a));
  for(int i=0;i<n-1;i++)    score+=(i+2)*a[i];
  score+=a[n-1]*n;
  cout<<score<<endl;
  
}
int32_t main() {
  IOS;
  init();
  return 0;
}
