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
void solve(int a, int b, int c, int d, int x, int y, int x1, int y1, int x2, int y2) {
  if (((x1==x2) or (y1==y2)) and (a != 0 or b != 0 or c != 0 or b != 0)) {
    cout << "No" << endl;
    return;
  }
  int h = b - a, v = d - c;
  if (x + h <= x2 and x + h >= x1 and y + v <= y2 and y + v >= y1)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
void init() {
  int T;
  cin >> T;
  while (T--) {
    int a, b, c, d, x, y, x1, y1, x2, y2;
    cin >> a >> b >> c >> d;
    cin >> x >> y >> x1 >> y1 >> x2 >> y2;
    solve(a,b,c,d,x,y,x1,y1,x2,y2);
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
