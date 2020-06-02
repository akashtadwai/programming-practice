#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
#define int long long
#define pb push_back
#define ff first
#define INF INT_MAX
#define ss second
#define rep(i, a) for (int i = 0; i < a; i++)
#define FOR(i, j, a) for (int i = j; i <= a; i++)
#define cnt_ones(x) __builtin_popcount(x)
#define all(x) x.begin(), x.end()
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
void init() {
  int T;
  cin >> T;
  vector<int>a(1000);
  a[0]=1;
  for(int i=1;i<1000;i++)
    a[i]=((i+1)*(i+1)+1)/2;

  while (T--) {
   int n,k;
   cin>>n>>k;
  int  index=lower_bound(a.begin(),a.end(),k)-a.begin();
string str="";
for(int i=0;i<n-2;i++)  str+='a';
str+='b';
str+='b';
   cout<<str<<endl;
  }
  
}
int32_t main() {
  IOS;
  init();
  return 0;
}

  
