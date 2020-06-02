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
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

void init() {
int n,m;cin>>n>>m;
set<int>a;
int k;
fr(i,0,n)  cin>>k,a.insert(k);
int i=1;
vi v;
while(m>0){
    if(!a.count(i))
      v.pb(i), m -= i;
    i++;
}
if(m<0) v.pop_back();
cout<<v.size()<<endl;
for(auto x:v)   cout<<x<<" ";
cout<<endl;

}
int32_t main() {
  IOS;
  init();
  return 0;
}
