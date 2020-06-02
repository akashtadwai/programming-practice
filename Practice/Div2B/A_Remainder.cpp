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
#define mp make_pair
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
void init() {
 int n,x,y;
 string s;
 cin>>n>>x>>y;
 cin>>s;
 string ans;
 for(int i=n-x;i<n;i++)
     ans+=s[i];
string q;
q.resize(ans.size(),'0');
q[ans.size()-1-y]='1';
int cnt=0;
for(int i=0;i<ans.size();i++){
    cnt+= (ans[i]-'0')^(q[i]-'0');
}
cout<<cnt<<endl;
  
}
int32_t main() {
  IOS;
  init();
  return 0;
}
