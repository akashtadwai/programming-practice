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
  int T;
  cin >> T;
  while (T--) {
    string s;
    cin >> s;
    int n = s.size();
    if (s.size() <= 2)
      cout << s << endl;
    else {
      string temp;
      temp += s[0];
      for (int i = 2; i < n - 1; i += 2)
        temp += s[i];
      temp += s[n - 1];
      cout << temp << endl;
    }
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
