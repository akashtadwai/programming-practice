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
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    vi a(n);
    map<int, int> mpa;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      mpa[a[i]]++;
    }
    set<int>st;
    for(auto it=mpa.begin();it!=mpa.end();it++){
        int x=it->ss;
        if(!st.count(x))    st.insert(x);
        else{
            while(x>0){
                if(!st.count(x)) break;
                else x--;
            }
            st.insert(x);
        }
    }
    int ans=accumulate(all(st),0);
    cout<<ans<<endl;
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
