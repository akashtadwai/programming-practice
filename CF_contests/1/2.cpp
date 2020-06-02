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

bool lis(vector<int>arr) {
    int n=arr.size();
  int lis[n];
  lis[0] = 0;
  /* Compute optimized LIS values in bottom up manner */
  for (int i = 1; i < n; i++) {
    lis[i] = 0;
    for (int j = 0; j < i; j++)
      if (arr[i] > arr[j] && lis[i] < lis[j] + 1){
        lis[i] = lis[j] + 1;
        if(lis[i]>0)    return true;
      }    
  }
 return false;
}

void init() {
  int n, k, l;
  cin >> n;
  vector<vector<int>>a(n);
  for (int i = 0; i < n; i++) {
    cin >> l;
    for (int j = 0; j < l; j++) {
      cin >> k;
      a[i].pb(k);
    }
  }
  int cnt=0;
  for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
          vector<int>b;
          b=a[i];
          b.insert(b.end(),a[j].begin(),a[j].end());
        //   for(int i=0;i<b.size();i++)   cout<<b[i]<<" ";
        //   cout<<endl;
          if(lis(b))    cnt++;
      }
  }
  cout<<cnt<<endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
