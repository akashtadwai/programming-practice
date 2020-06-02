#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
#define int long long
#define pb push_back
#define ff first
#define INF INT_MAX
#define ss second
#define rep(i, a) for (int i = 0; i < a; i++)
#define fr(i, j, a) for (int i = j; i < a; i++)
#define cnt_ones(x) __builtin_popcount(x)
#define all(x) x.begin(), x.end()
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
  string a,b;cin>>a>>b;
  int m=a.size(),n=b.size();
  if(n>m)   cout<<0<<endl;
  else{
    int cnt = 0;
    for (int i = 0, j = 0; i <= m - n;) {
      if (a.substr(i, n) == b)
        cnt++,i+=n;
        else i++;
    }
    cout<<cnt<<endl;
  }
  
}
int32_t main() {
  IOS;
  init();
  return 0;
}
