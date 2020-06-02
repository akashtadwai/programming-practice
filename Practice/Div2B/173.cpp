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
  int n;cin>>n;
  vi a(n),b(n);
  int as=0,bs=0;
  string ans;
  fr(i,0,n){
      cin>>a[i]>>b[i];
      int mn=min(a[i],b[i]);
      if(mn==a[i]){
          ans+='A';
          as+=mn;
      }
      else{
          ans+='G';
          bs+=mn;
      }
      if(abs(as-bs)>500){
          if(as>bs){
              as-=mn;
              ans.pop_back();
              ans+='G';
              bs+=a[i]+b[i]-mn;
          }
          else{
              bs-=mn;
              ans.pop_back();
              ans+='A';
              as += a[i] + b[i] - mn;
          }
      }
  }
  if(abs(as-bs)>500){
      cout<<-1<<endl;
      return;
  }
  else cout<<ans<<endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
