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
set<int>a;
int sum=0;
for(int i=0;i<1e5;i++){
    sum+=pow(3,i);
   if(pow(3,i)<1e5) a.insert(pow(3,i));
    if (sum<1e5 ) a.insert(sum);
    if (pow(3, i) > 1e5)    break;    
}
vi st(all(a));
int q;cin>>q;
while(q--){
int n;cin>>n;
auto it=lower_bound(all(st),n)-st.begin();
cout<<st[it]<<endl;
}
}
int32_t main() {
  IOS;
  init();
  return 0;
}
