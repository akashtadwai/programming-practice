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
#define vi vector<int>
#define vvi vector<vector<int>>
#define vp vector<ipair>
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
void solve(int n, int k){
    if(k>n) {
        cout<<"NO"<<endl;
        return;
    }
    if(k==n){
      cout << "YES" << endl;
      for(int i=0;i<k;i++)  cout<<1<<" ";
      cout<<endl;
      return;
    }
    if(n%2==0 and k%2==1){
        if(k>n/2)  {
            cout<<"NO"<<endl;
            return;
        }
        else{
            cout<<"YES"<<endl;
            for(int i=0;i<k-1;i++)    cout<<2<<" ";
            cout<<n+2-2*k<<endl;
            return;
        }

    }
    if((n%2==1 and k%2==1) or (n%2==0 and k%2==0)){
        cout<<"YES"<<endl;
        for(int i=0;i<k-1;i++)  cout<<1<<" ";
        cout<<n+1-k<<endl;
        return;
    }
    cout<<"NO"<<endl;
    return;
}
void init() {
  int T;
  cin >> T;
  while (T--) {
      int n,k;cin>>n>>k;
      solve(n,k);
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
