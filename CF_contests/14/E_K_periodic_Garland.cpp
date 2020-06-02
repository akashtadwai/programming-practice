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
void init() {
  int T;
  cin >> T;
  while (T--) {
    int n, k;
    cin >> n >> k;
    string s;cin>>s;
    int i=0,j=0;
    for(i=0;i<n;i++)  {
        if(s[i]==1) break;
    }
    j=i+k;
    int cnt=0;
    while(i<n and i<j and j<n){
        if(s[i]=='1' and s[j]=='1' )
    }
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
