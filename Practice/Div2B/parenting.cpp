#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
#define int long long
#define pb push_back
#define ff first
#define INF INT_MAX
#define ss second
#define rep(i, a) for (int i = 0; i < a; i++)
#define FOR(i, j, a) for (int i = j; i < a; i++)
#define cnt_ones(x) __builtin_popcount(x)
#define all(x) x.begin(), x.end()
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

string printMaxActivities(vector<pair<int, ipair>> times) {
  int i, j, cnt = 0;
  vector<char> ans(times.size());
  i = 0;
  ans[times[0].first] = 'C';
  for (j = 1; j < times.size(); j++) {
    if (times[j].ss.ff >= times[i].ss.ss) {
      ans[times[j].ff] = 'C';
      i = j;
      cnt = 0;
    } else {
      ans[times[j].ff] = 'J';
      cnt++;
      if (cnt == 2)
        return "IMPOSSIBLE";
    }
  }
  string res(ans.begin(), ans.end());
  return res;
}
bool compare(const pair<int, ipair> &i, const pair<int, ipair> &j) {
  return i.ss.ss < j.ss.ss;
}
void init() {
  int T;
  cin >> T;
  for (int t = 1; t <= T; t++) {
    int n;
    cin >> n;
    vector<pair<int, ipair>> time(n);
    for (int i = 0; i < n; i++) {
      cin >> time[i].ss.ff >> time[i].ss.ss;
      time[i].first = i;
    }
    sort(time.begin(), time.end(), compare);
    string res = printMaxActivities(time);
    cout << "Case #" << t << ": " << res << endl;
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
