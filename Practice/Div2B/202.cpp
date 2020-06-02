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
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
vector<int> g[1000000];
vector<int> d(1000000);
vector<int> sz(1000000);

void init() {
int n;cin>>n;
vi a(n);
fr(i,0,n)   cin>>a[i];
int c2=0,c5=0;
fr(i,0,n){
    if(a[i]==25)    c2++;
    else if(a[i]==50)    c2--,c5++;
    else{
        if(c5>0)    c5--,c2--;
        else c2-=3;
    }
    if (c2 < 0 or c5 < 0){
      cout << "NO" << endl;
      return;
    }
      
}
  cout << "YES" << endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
