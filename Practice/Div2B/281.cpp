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
int n,k;
string f,s;5
int pts1=0,pts2=0,p;
cin>>n;
int s1=0;
int s2=0;
while(n--){
cin>>k;
 k>0?pts1+=k:pts2+=k;
}
f+=to_string(pts1);
s+=to_string(pts2);
if(pts1>pts2){
    cout<<"first"<<endl;
    return;
}
if(pts1<pts2){
    cout<<"second"<<endl;
    return;
}
if(pts1==pts2 and f!=s){
f>s?cout<<"first":cout<<"second";
}
else{
    k>0?cout<<"first":cout<<"second";
}
    
}
int32_t main() {
  IOS;
  init();
  return 0;
}
