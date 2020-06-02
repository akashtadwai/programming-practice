#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
#define int long long
#define pb push_back
#define ff first
#define INF INT_MAX
#define ss second
#define rep(i, a) for (int i = 0; i < a; i++)
#define fr(i,j,a) for (int i = j; i < a; i++)
#define cnt_ones(x) __builtin_popcount(x)
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vvi vector<vector<int> >
#define vp vector<ipair> 
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
void init() {
  int n;cin>>n;
  vi a(n);
  for(int i=0;i<n;i++) cin>>a[i];
  vi b(a);
  int stidx=0;
  int cnt=0;
  sort(all(b));
  for(int i=0;i<n;i++){
      if(a[i]!=b[i])
          stidx=i;
          break;
  }
  int endx=n-1;
    for(int i=n-1;i>=0;i--){
      if(a[i]!=b[i]){
          endx=i;
          break;
  }
    }
  fr(i,0,n) if(a[i]==b[i])  cnt++;
  if(cnt==n){
      cout<<"yes"<<endl;
      cout<<1<<" "<<1<<endl;
      return;
  }
  reverse(a.begin() + stidx, a.begin() +endx+1);
//   cout<<stidx<<" "<<endx;
//   cout<<endl;
//   for(auto x:a) cout<<x<<" ";
//   cout<<endl;
    int flag=1;
  fr(i,0,n) if(a[i]!=b[i]) flag=0;
  if(flag)  {
      cout<<"yes"<<endl;
      cout<<stidx+1<<" "<<endx+1<<endl;
  }
  else cout<<"no"<<endl;

}
int32_t main() {
  IOS;
  init();
  return 0;
}
