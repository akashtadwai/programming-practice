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
    string s;cin>>s;
    char st=s[0];
    char ot = s[0]=='1'?'0':'1';
    int c1=0,c0=0;
    for(auto x:s){
        if(x=='0')  c0++;
        else c1++;
    }
    if(c1==0 or c0==0)    cout<<s<<endl;
    else {
        vector<char>ans(2*s.size());
    for(int i=0;i<ans.size();i+=2)  ans[i]=st;
    for(int i=1;i<ans.size();i+=2)  ans[i]=ot;
    for(auto x:ans) cout<<x;
    cout<<endl;
    }
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
