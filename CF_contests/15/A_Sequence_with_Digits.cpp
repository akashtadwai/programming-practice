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
string mn(int a){
    string k = to_string(a);
    int mn=INT_MAX,mx=INT_MIN;
    for(int i=0;i<k.size();i++){
        mn=min(mn,(int)(k[i]-'0'));
        mx=max(mx,(int)(k[i]-'0'));
    }
    string res= to_string(mn);
    res+=to_string(mx);
    return res;
}
void init() {
  int T;
  cin >> T;
  while (T--) {
      int a,k;
      cin>>a>>k;
      for(int i=1;i<k;i++){
        string res = mn(a);
        if(res[0]=='0' or res[1]=='0')  break;
        a+=(res[0]-'0')*(res[1]-'0');
      }
      cout<<a<<endl;
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
