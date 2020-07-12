// https://atcoder.jp/contests/dp/tasks/dp_n

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
int solve(int a, int b) {
  int cnt = 0;
  if (a == b)
    return 0;
  if (a > b) {
    while (a > b and a > 0 and !(a & 1)) {
      a = a >> 1;
      cnt++;
      //   cout << a << " " << b << endl;
      if (a == b)
        return min({cnt, (cnt / 3) + (cnt % 3), (cnt / 2) + cnt % 2});
    }
  }
 else {
    cnt = 0;
    while (a < b) {
      a = a << 1;
      cnt++;
      //   cout << a << " " << b << " "<<cnt<<endl;
      if (a == b)
        return min({cnt, (cnt / 3) + (cnt % 3), (cnt / 2) + cnt % 2});
    }
  }
  return -1;
}
void init() {
  /*int T;
  cin >> T;
  while (T--) {
    int a, b;
    cin >> a >> b;
    cout << solve(a, b) << endl;
  }*/
  vector<pair<int,int> > a{{1,2},{2,4},},
}
int32_t main() {
  IOS;
  init();
  return 0;
}
