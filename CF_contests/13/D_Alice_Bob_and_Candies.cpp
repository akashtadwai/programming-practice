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
int n, k;
void init() {
  int T;
  cin >> T;
  while (T--) {
    cin >> n;
    vi a(n);
    for(int i=0;i<n;i++)    cin>>a[i];
    int turn=1,al=a[0],b=0,prev=a[0],rounds=0;
    int i=1,j=n-1;
    while(i<=j){
        int cur=0;
        if(turn==1){
            while(cur<=prev and i<=j){
                cur+=a[j];
                j--;
            }
            b+=cur;
        }
        else{
          while (cur <= prev and i<=j) {
            cur += a[i];
            i++;
          }
          al += cur;
        }
        turn^=1;
        prev = cur;
        ++rounds;
    }
    cout<<rounds+1<<" "<<al<<" "<<b<<endl;

  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
