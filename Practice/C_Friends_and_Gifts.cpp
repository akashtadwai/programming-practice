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
  int n;
  cin >> n;
  int k;
  vector<bool> vis(n + 1, false);
  vi arr(n);
  vi a;
  fr(i, 0, n) {
    cin >> k;
    arr[i] = k;
    if(k!=0) vis[arr[i]] = true;
  }
  fr(i, 1, n + 1) if (!vis[i]) a.pb(i);
  for(auto x:a) cout<<x<<" ";
  cout<<endl;
  fr(i, 0, n) {
    if (arr[i]==0 and a.size()>0) {
        if(a.size()==1){
            arr[i]=a[0];
            break;
        }
      if (a[0] == i + 1 ) {
        arr[i] = a[1];
        a.erase(a.begin() + 1);
      } else {
        arr[i] = a[0];
        a.erase(a.begin());
      }
    }
  }
  for(auto x:arr)   cout<<x<<" "; 
}
int32_t main() {
  IOS;
  init();
  return 0;
}
