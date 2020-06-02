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
vi arr(1e5);
int product;
void pre(int a, int b) {
  product = a * b;
  arr.resize(product);
  for (int i = 1; i <= product; i++) {
    arr[i] = arr[i - 1];
    if ((i % a) % b != (i % b) % a)
      arr[i]++;
  }
}

int query(int l) {
  int cnt = l / product;
  int rem = l % product;
  int res = cnt * arr[product] + arr[rem];
  return res;
}
void init() {
  int T;
  cin >> T;
  while (T--) {
    int a, b, q;
    cin >> a >> b >> q;
    pre(a, b);
    while (q--) {
      int l, r;
      cin >> l >> r;
      cout << query(r) - query(l - 1) << endl;
      ;
    }
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
