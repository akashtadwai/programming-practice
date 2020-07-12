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
  int z, o;
  cin >> z >> o;
  if (o > 3 * z or z > o + 1)
    cout << -1 << endl;
  else {
    int n = z + o;
    string s(z + o, '?');
    if (z > o) {
      string q;
      while (n - 1) {
        q += "01";
        n -= 2;
      }
      q += "0";
      cout << q << endl;
    } else {
      int i = 2;

      while (i < n and z >= 0) {
        s[i] = '0';
        i += 3;
        z--;
      }
      for (int i = 0; i < s.size(); i++) {
        if (s[i] == '?')
          s[i] = '1';
      }
      cout << s;
    }
  }
}

int32_t main() {
  IOS;
  init();
  return 0;
}