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
#define mp make_pair
#define mod 1000000007
#define vi vector<int>
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

void init() {
  int T;
  cin >> T;
  while (T--) {
      int n,k,x;cin>>n>>x;
      set<int>a;
      fr(i,0,n){
          cin>>k;
          a.insert(k);
      }
      int value=*(a.begin());
          int j=1;
        for(auto i=a.begin();i!=a.end(),x>0;i++){
            value=j;
            if(*i==j)
                j++;
            else{
                x--;
                a.insert(j);
                i++;
                j++;
            }
        }
      cout<<value<<endl;

  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
