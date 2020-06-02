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
void init() {
 string s;cin>>s;
 int n=s.size();
 int l=0,r=n-1;
 vi li,ri;
 while(l<r){
     while(s[l]==')')  ++l;
     while (s[r]=='(')  --r;
    if(l<r and l>=0 and r<n){
        li.pb(l+1);
        ri.pb(r+1);
        ++l,--r;
    }
 }

 if(li.empty() or ri.empty())   cout<<0<<endl;
 else{
     reverse(all(ri));
     cout<<1<<endl;
     int mn=min(li.size(),ri.size());
     cout<<2*mn<<endl;
     for(int i=0;i<mn;i++)  cout<<li[i]<<" ";
     for (int i = 0; i < mn; i++)
       cout << ri[i] << " ";
 }

}
int32_t main() {
  IOS;
  init();
  return 0;
}
