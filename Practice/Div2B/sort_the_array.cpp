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
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
void init() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int &i : a)
    cin >> i;
  int i = 0;
  int x = 0;
  int l = 0, li = 0, r = 0;
  while (i < n) {
    bool ok = false;
    li = i;
    while (i < n - 1 and a[i] > a[i + 1])
      l = li, ok = true, i++;
    if (ok)
      x++, r = i, reverse(a.begin() + li, a.begin() + r + 1);
    i++;
    if (x > 1)
      break;
  }
  if (x > 1 or !is_sorted(all(a)))
    cout << "no";
  else {
    cout << "yes" << endl << l + 1 << " " << r + 1;
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
