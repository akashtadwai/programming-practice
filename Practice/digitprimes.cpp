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
vector<bool> primes(1e6+5,true);
void sieve(){
    primes[0]=primes[1]=false;
    for(int i=2;i*i<=1e6;i++){
        if(primes[i]){
            for(int j=i*i;j<=1e6;j+=i)  primes[j]=false;
        }
    }
}
int sum(int n){
    int s=0;
    while(n){
        s+=n%10;
        n/=10;
    }
    return s;
}
void init() {
    sieve();
vector<int>res(1e6+5);
for(int i=1;i<=1e6;i++){
  if (primes[i] == true and primes[sum(i)] == true) {
      res[i]=1;
    }
}
for(int i=1;i<=1e6;i++) res[i]+=res[i-1];
 int T;scanf("%lld",&T);
 while (T--){
     int l,r;
     scanf("%lld %lld",&l,&r);
     cout<<res[r]-res[l-1]<<endl;
 }
 
}

int32_t main() {
  IOS;
  init();
  return 0;
}