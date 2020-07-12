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
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
void init() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  map<char, int> mp;
  int ans = 0;
  for (int i = 1; i < 2 * (n - 1); i += 2) {
    mp[s[i - 1]]++;
    int ch = tolower(s[i]);
    if (mp.count(ch)) {
      if (mp[ch] == 1)
        mp.erase(ch);
      else
        mp[ch]--;
    } else
      ans++;
  }
  cout << ans << endl;
}

int32_t main() {
  IOS;
  init();
  return 0;
}