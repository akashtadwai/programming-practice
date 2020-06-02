#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
#define int long long
#define pb push_back
#define ff first
#define INF INT_MAX
#define ss second
#define rep(i, a) for (int i = 0; i < a; i++)
#define FOR(i, j, a) for (int i = j; i <= a; i++)
#define cnt_ones(x) __builtin_popcount(x)
#define all(x) x.begin(), x.end()
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
void init() {
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string a;
    string b;
    int index=0;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '2') {
        a += '1';
        b += '1';
      } else if (s[i] == '0') {
        a += '0';
        b += '0';
      } else if (s[i] == '1') {
        a += '1';
        b += '0';
        index = i;
        break;
      }
    }
    if(index!=0){
      for (int i = index + 1; i < s.size(); i++) {
        a += '0';
        b += s[i];
      }
    }

    cout << a << endl;
    cout << b << endl;
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}