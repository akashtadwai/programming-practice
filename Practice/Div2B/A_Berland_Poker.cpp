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
vi cum(1e6);
void init() {
    int T;cin>>T;
    int n,m,k;
    while(T--){
        cin>>n>>m>>k;
        if((n/k)>=m)  cout<<m<<endl;
        else{
            int p = ceil(1.0*(m-n/k)/(k-1));
            cout<<n/k - p <<endl;
        }
    }
}

int32_t main() {
  IOS;
  init();
  return 0;
}