#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
#define int long long
#define pb push_back
#define ff first
#define INF INT_MAX
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
void init() {
  int T;
  cin>>T;
  while(T--){
      int n;
      cin>>n;
      string s="2";
      if (n==1) cout<<-1<<endl;
      else{
          for(int i=n;i>1;i--)
              s+='3';
          cout<<s<<endl;
      }
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}