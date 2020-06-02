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
  int n,k;cin>>n>>k;
  vi a(n);
  fr(i,0,n) cin>>a[i];
  string s;cin>>s;
  int dmg=0;
  for(int i=0,j=0;i<n;i=j){
      while(j<n and s[i]==s[j]) ++j;
      sort(a.begin()+i,a.begin()+j,greater<int>());
      for(int p=i;p<min(j,i+k);p++) dmg+=a[p];
  }
  cout<<dmg<<endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
