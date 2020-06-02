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
int c;vi a;

bool isValid(int mid){
    int lst=a[0];
    int cows=1;
    for(int i=1;i<a.size();i++){
        if(a[i]-lst >= mid){
            ++cows;
            if (cows == c)
              return true;
            lst=a[i];
        }
    }
    return 0;
}
void init() {
  int T;
  cin >> T;
  while (T--) {
   int n;cin>>n>>c;
   a.resize(n);
   for(int i=0;i<n;i++) cin>>a[i];
   sort(all(a));
   int lo=0,hi=a[n-1];
   while(lo<=hi){
       int mid= lo + (hi-lo)/2;
       if(isValid(mid))
           lo=mid+1;
       else hi=mid-1;
   }
   cout<<lo-1<<endl;
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
