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
int T;cin>>T;
while(T--){
    int n,k,d;cin>>n>>k>>d;
    vi a(n);
    fr(i,0,n)   cin>>a[i];
    map<int,int>mpa;
    for(int i=0;i<min(n,d);i++)
        mpa[a[i]]++;
    int ans=mpa.size();
    int res=ans;
    for(int i=d;i<n;i++){
        mpa[a[i-d]]--;
        if(mpa[a[i-d]]==0)  --ans;  
        mpa[a[i]]++;
        if (mpa[a[i]] == 1) ++ans;
          res = min(res,ans);
        
    }
    cout<<res<<endl;
}
}
int32_t main() {
  IOS;
  init();
  return 0;
}
