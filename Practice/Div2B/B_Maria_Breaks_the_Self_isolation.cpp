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
  int T;
  cin >> T;
  while (T--) {
      int n;cin>>n;
    vi a(n);
    for(int i=0;i<n;i++)    cin>>a[i];
    map<int,int>mpa;
    int res=0;
    for(auto x:a)   mpa[x]++;
    for(auto pp:mpa)    res+=pp.second;
    for(auto it=mpa.rbegin();it!=mpa.rend();it++){
        if(res<it->first)
            res-=it->second;
        else break;
    }
    cout<<res+1<<endl;

  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
