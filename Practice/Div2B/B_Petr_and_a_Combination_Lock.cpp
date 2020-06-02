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
#define IOS                                                                 \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
void init() {
int n;cin>>n;
vi a(n);
fr(i,0,n)   cin>>a[i];
bool ok=false;
for(int mask=0;mask<(1<<n);mask++){
    int sum=0;
    for(int i=0;i<n;i++){
        if(mask & (1<<i))  sum+=a[i];
        else sum-=a[i];
    }
    if(sum%360==0)  {
        ok=true;
        break;
    }
}
if(ok)  cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
