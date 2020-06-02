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
#define vi vector<int>
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

void init() {
  int n;
  cin >> n;
  vi b(n/2);
fr(i,0,n/2)   cin>>b[i];
vi a(n);
a[0] = 0;
a[n - 1] = b[0];

for (int i = 1; i < n / 2; i++) {
  if (b[i] <= b[i - 1]) {
    a[i] = a[i - 1];
    a[n - i - 1] = b[i] - a[i - 1];
  } else {
    a[n - i - 1] = a[n - i];
    a[i] = b[i] - a[n - i];
  }
}
for(auto x:a)   cout<<x<<" ";
}
int32_t main() {
  IOS;
  init();
  return 0;
}
