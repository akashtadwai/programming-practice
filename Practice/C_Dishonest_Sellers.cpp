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
int n,k;cin>>n>>k;
vi a(n),b(n);
fr(i,0,n)   cin>>a[i];
fr(i,0,n)   cin>>b[i];
vector<ipair> c(n);
fr(i,0,n)   c[i].ff=a[i]-b[i],c[i].ss=i;
int res=0;
sort(all(c));
int i=0;
while(k--){
res+=a[c[i].ss];
i++;
}
for(int index=i;index<c.size();index++){
    if(c[index].ff<=0) res+=a[c[index].ss];
    else res+=b[c[index].ss];
}
cout<<res<<endl;

}
int32_t main() {
  IOS;
  init();
  return 0;
}
