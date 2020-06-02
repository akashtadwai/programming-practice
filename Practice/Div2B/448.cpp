#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
#define int long long
#define pb push_back
#define ff first
#define INF INT_MAX
#define ss second
#define rep(i, a) for (int i = 0; i < a; i++)
#define fr(i,j,a) for (int i = j; i < a; i++)
#define cnt_ones(x) __builtin_popcount(x)
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vvi vector<vector<int> >
#define vp vector<ipair> 
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
void init() {
 string s,t;
 cin>>s>>t;
 int n=s.size(),m=t.size();
 bool aut=false,arr=true,bo=true;
 vi cnt(26);
 for(int i=0,j=0;i<n;i++){
     if(t[j]==s[i] and j<m) ++j;
     if(j==m)   aut=true;
 }
fr(i,0,m)   cnt[t[i]-'a']--;
fr(i,0,n)   cnt[s[i]-'a']++;
for(int i=0;i<26;i++){
    arr&=cnt[i]==0;
    bo&=cnt[i]>=0;
}
if(aut) cout<<"automaton"<<endl;
else if(arr)    cout<<"array"<<endl;
else if(bo) cout<<"both"<<endl;
else cout<<"need tree"<<endl;

}
int32_t main() {
  IOS;
  init();
  return 0;
}
