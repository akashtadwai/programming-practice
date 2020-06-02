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
  int n,b;cin>>n>>b;
vi a(n); 
fr(i,0,n)   cin>>a[i];
vi c;
int res=0;
fr(i,0,n){
    if(a[i]%2==0)   res++;
    else res--;
    if(res==0 and i!=n-1)
        c.pb(abs(a[i]-a[i+1]));
}
sort(all(c));
int cnt=0;
fr(i,0,c.size()){
    if(b-c[i]>=0){
        ++cnt;
        b-=c[i];
    }
}
cout<<cnt<<endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
