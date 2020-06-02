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
#define endl "\n"
#define vi vector<int>
#define vvi vector<vector<int>>
#define vp vector<ipair>
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
vi vis(2*pow(10,8)+1,0);
void pre(int a,int b){
    vis[a+pow(10,8)]++;
    vis[b+1+pow(10,8)]--;
}
void init() {
 int s,p;cin>>s>>p;
 int point;
 int mn=INT_MAX,mx=INT_MIN;
 int x,y;
 while(s--){
    cin>>x>>y;
    mn=min({mn,x,y});
    mx=max({mx,x,y});
    pre(x,y);
 }
 for(int i=mn+pow(10,8);i<=mx+pow(10,8);i++){
     vis[i]+=vis[i-1];
 }
 while(p--){
   cin >> point;
   cout<<max(vis[point+pow(10,8)],0LL)<<" ";
 }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
