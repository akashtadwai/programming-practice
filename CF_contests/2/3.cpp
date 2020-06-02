#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
#define int long long
#define pb push_back
#define ff first
#define ss second
#define fr(i, j, k) for (int i = j; i < k; i++)
#define cnt_ones(x) __builtin_popcount(x)
#define all(x) x.begin(), x.end()
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
vector<int>v;
void div(int n) {
  for (int i = 1; i <= sqrt(n); i++) {
    if (n % i == 0 and i==n/i) 
      v.pb(i);
      else if (n%i==0 and i!=n/i) {
          v.pb(i);
          v.pb(n/i);
      }
}
sort(v.begin(),v.end());
}
int lcm(int a, int b){
    return (a*b)/__gcd(a,b);
}
void init() {
  int x,idx;cin>>x;
div(x);
int min=LONG_LONG_MAX;
// for(auto i:v)cout<<i<<" ";
int ok=0;
int i=sqrt(x);
    int j=lower_bound(v.begin(),v.end(),i)-v.begin();
    while(j>=0){
      if (lcm(v[j], x / v[j]) == x) {
        ok = 1;
        break;
      }
      j--;
    }
   cout<<v[j]<<" "<<x/v[j]<<endl;
v.clear();
}
int32_t main() {
  IOS;
  init();
  return 0;
}
