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
#define vvi vector<vector<int>>
#define vp vector<ipair>
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
void init() {
string s;
cin>>s;
vi cnt(26);
int oddc=0;
for(char x:s)   cnt[x-'a']++;
for(auto x:cnt) 
    if(x%2==1) oddc++;
if(oddc<=1){
    cout<<"First"<<endl;
    return;
}

if(oddc%2==1){
    cout<<"First"<<endl;
}
else{
    cout<<"Second"<<endl;
}
}
int32_t main() {
  IOS;
  init();
  return 0;
}
