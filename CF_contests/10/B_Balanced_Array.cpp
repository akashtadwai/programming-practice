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
#define vi vector<int>
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

void init() {
int T;cin>>T;
while(T--){
    int n;cin>>n;
    bool ok=true;
    if((n/2)&1) ok=false;
    vi a;
    int k=2;
    int sum=0;
    fr(i,0,n/2) sum+=k,a.pb(k),k+=2;
    k=1;
    fr(i,0,n/2-1)   a.pb(k),k+=2;
    int p=n/2 -1;
    a.pb(sum- (p*p));
    if(ok){
        cout<<"YES"<<endl;
        for (auto x : a)
          cout << x << " ";
          cout<<endl;
    }
    else cout<<"NO"<<endl; 
    
}
}
int32_t main() {
  IOS;
  init();
  return 0;
}
