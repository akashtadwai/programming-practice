#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
#define int long long
#define pb push_back
#define ff first
#define INF INT_MAX
#define ss second
#define rep(i, a) for (int i = 0; i < a; i++)
#define FOR(i, j, a) for (int i = j; i <=a; i++)
#define cnt_ones(x) __builtin_popcount(x)
#define all(x) x.begin(), x.end()
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
void init() {
int m,s;
cin>>m>>s;
if(s==0)    cout<<-1<<" "<<-1<<endl;
else if ((s / m) < 0 or (s / m) > 9) {
  cout << -1 << " " << -1 << endl;
} 
else{
    string str="";
    int k=s/9;
    int rem=s-k*9;
    for(int i=0;i<=k-1;i++)
      str+='9';
    if(k==0){
        if(m<=s){
          for (int i = 0; i < s - 1; i++)
            str += '0';
        }
    else{
          for (int i = 0; i <= s - 1; i++)
            str += '0';
    }

    }
    string ori=str;
    for(int i=0;i<str.size();i++) if(str[i]=='0') str.erase(i,1);
    if(rem!=0){
        ori+=to_string(rem);
        str += to_string(rem);
    }  
    string st=ori;
    reverse(st.begin(),st.end());
    if(str.size()!=m){
        cout<<st<<" "<<st;
    }
    else cout<<st<<" "<<str;

}
}
int32_t main() {
  IOS;
  init();
  return 0;
}
