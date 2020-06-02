#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
#define int long long
#define pb push_back
#define ff first
#define INF INT_MAX
#define ss second
#define rep(i, a) for (int i = 0; i < a; i++)
#define FOR(i, j, a) for (int i = j; i <=a; i++)
#define cnt_ones(x) __builtin_popcount(x)
#define all(x) x.begin(), x.end()
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
void init() {
int T;cin>>T;
while(T--){
int n;
cin>>n;
map<int,int>a;
for(int i=2;i<=sqrt(n);i++){
    if(n%i==0)  a[i]++;
    n/=i;
}
}
}
int32_t main() {
  IOS;
  init();
  return 0;
}
