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
  string s;
  cin >> s;
  int n=s.size();
  for(int i=0,j=0;i<n;i=j){
      while(j<n and s[i]==s[j]) ++j;
      char c='a';
      while(c==s[i] or (i>0 and s[i-1]==c) or (j<n and c==s[j]))    ++c;
      fr(k,i,j)
          if((i+k)&1) s[k]=c;
  }
  cout<<s<<endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
