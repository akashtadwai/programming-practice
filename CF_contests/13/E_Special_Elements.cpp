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
 int t;cin>>t;
 while(t--){
     int n;cin>>n;
     vi a(n), b(n+1);
     fr(i,0,n)  cin>>a[i];
     for(int i=0;i<n-1;i++){
         int cur=a[i];
         for(int j=i+1;j<n;j++){
             cur+=a[j];
             if(cur>=0 and cur<=n)  b[cur]++;
         }
     }
     int ans=0;
     for(int i=0;i<n;i++){
         if(b[a[i]]>0)  ans++;
     }
     cout<<ans<<endl;
 }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
