#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
// #define int long long
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
void init() {
  int T;
  cin >> T;
  while (T--) {
    int n, k;
    cin >> n >> k;
    set<int> st;
    int p;
    fr(i, 0, n) {
      cin >> p;
      st.insert(p);
    }
    vi a(all(st));
    int res=0;
    int dmg=0;
    while(!a.empty() and a.back()-dmg>0){
        res++;
        a.pop_back();
        dmg+=k;
    }
    cout<<res<<endl;
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
