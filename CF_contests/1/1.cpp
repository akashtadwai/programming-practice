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

void init() {
  int  n, m;
  cin >>n>> m;
  vector<string> a(n),b(m);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < m; i++)
    cin >> b[i];
    int T;
    cin>>T;
    while(T--){
        int q;
        cin>>q;
        q--;
        string res=a[q%n]+b[q%m];
        cout<<res<<endl;
    }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
