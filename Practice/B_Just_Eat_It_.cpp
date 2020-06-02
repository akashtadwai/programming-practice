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
void init() {
 int T;cin>>T;
 while(T--){
     int n;cin>>n;
     vi a(n);
     fr(i,0,n)  cin>>a[i];
     int s=accumulate(all(a),0LL);
     int temp=0;
     bool ok1=false,ok2=false;
     for(int i=0;i<n-1;i++){
             temp+=a[i];
             if(temp>=s){
                 ok1=true;
                 break;
             }
     }
     temp=0;
     for (int i = n-1; i>0; i--) {
       temp += a[i];
       if (temp >= s) {
         ok2 = true;
         break;
       }
     }
     if(ok1 or ok2) cout<<"NO"<<endl;
     else cout<<"YES"<<endl;
 }
}

int32_t main() {
  IOS;
  init();
  return 0;
}