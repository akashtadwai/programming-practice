#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
#define int long long
#define pb push_back
#define ff first
#define INF INT_MAX
#define ss second
#define rep(i, a) for (int i = 0; i < a; i++)
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
vector<int> g[1000000];
vector<int> d(1000000);
vector<int> sz(1000000);

void init() {
string a,b;cin>>a>>b;
vi cnt1(26), cnt2(26);
for(char x:a)   cnt1[x-'a']++;
for(char x:b)   cnt2[x-'a']++;
int ans=0;
for(int i=0;i<26;i++){
    if(cnt1[i] == 0 && cnt2[i] != 0){
            cout << "-1";
            return;
        }
    ans+=min(cnt1[i],cnt2[i]);
}
cout<<ans<<endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
