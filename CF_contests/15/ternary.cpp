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
// #define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
string minWindow(string s, string t) {
  int m = s.size(), n = t.size();
  if (m == 0 or n == 0)
    return "";
  string ans = "";
  int start_index = -1, start = 0, window = INT_MAX, cnt = 0;
  map<char, int> mp, pm;
  for (int i = 0; i < n; i++)
    mp[t[i]]++;
  for (int i = 0; i < m; i++) {
    pm[s[i]]++;
    if (pm[s[i]] <= mp[s[i]] and mp[s[i]] != 0) {
        cnt++;
    }
    if (cnt == n) {
      while (pm[s[start]] > mp[s[start]]) {
        pm[s[start]]--;
        start++;
      }
      int win = i - start + 1;
      if (win < window) {
        window = win;
        start_index = start;
      }
    }
  }
  if (start_index == -1)
    return "";
  return s.substr(start_index, window);
}
void init() {
    string s="jkflsdjfdsf
    kjfslfjsdf";
    cout<<s<<endl;
  /*int T;
  cin >> T;
  while (T--) {
    string s;
    cin >> s;
    string ans = minWindow(s, "123");
    cout << ans.size() << endl;
  }*/
}
int32_t main() {
  IOS;
  init();
  return 0;
}
