#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
#define int long long
#define pb push_back
#define ff first
#define INF INT_MAX
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

void init() {
 int T;
 cin>>T;
 while(T--){
    string s;
    int sprev=1,smax=0;
    cin>>s;
    for(int i=0;i<s.size()-1;i++){
        sprev=0;
        for(int j=i+1;j<s.size();j++){
            if(s[i]=='L' and s[j]=='L'){
                sprev+=1;
                smax=max(smax,sprev);
                cout<<smax+1<<endl;
            }
            else break;
        }
    }
    cout<<smax+1<<endl;
 }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
