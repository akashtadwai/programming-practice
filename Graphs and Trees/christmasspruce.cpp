#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
#define int long long
#define pb push_back
#define ff first
#define INF INT_MAX
#define ss second
#define rep(i, a) for (int i = 0; i < a; i++)
#define cnt_ones(x) __builtin_popcount(x)
#define all(x) x.begin(), x.end()
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
void init() {
  int n;
  cin>>n;
  vector<int>p(n),deg(n),leaves(n);
  for(int i=1;i<n;i++){
      cin>>p[i];
      p[i]--;
      deg[p[i]]++;
  }
  for(int i=0;i<n;i++)
      if(deg[i]==0)
          leaves[p[i]]++;
    rep(i,n){
        if(deg[i]>0 and leaves[i]<3){
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<"Yes"<<endl;

}
int32_t main() {
  IOS;
  init();
  return 0;
}
