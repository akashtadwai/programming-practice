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
  int T;
  cin >> T;
  while (T--) {
    int h,c,t;cin>>h>>c>>t;
    int cnt=0;
    while(c<=h){
        cnt++;
        int mid = c + (h-c)/2;
        if(mid==t)  break;
        else if(mid<t) c=mid+1;
        else h=mid-1;   
    }
    cout<<cnt<<endl;
  }
}

int32_t main() {
  IOS;
  init();
  return 0;
}