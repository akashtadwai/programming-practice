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


void soe(vector<bool>&primes){
    primes[0]=primes[1]=false;
    for(int i=2;i*i<=primes.size();i++){
        for(int j=i*i;j<=primes.size();j+=i){
            primes[j]=false;
        }
    }
}
void init() {
  vector<bool> primes(1e6 + 1, true);
  int T;
  cin >> T;
  soe(primes);
  while (T--) {
      int x;cin>>x;
      int sq=sqrt(x);
      if(sq*sq==x and primes[sq]==true) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
