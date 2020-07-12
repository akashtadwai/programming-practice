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
 int n;cin>>n;
 vi a(n);
 int ans=1;
 for(int &i:a)  cin>>i;
 for(int i=0;i<n;i++){
     int l=i,r=i;
     while(l and a[l-1]<=a[l])   l--;
     while(r<n-1 and a[r+1]<=a[r])   r++;
     ans=max(ans,r-l+1);
 }
 cout<<ans<<endl;
}

int32_t main() {
  IOS;
  init();
  return 0;
}