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
    int n;
    cin>>n;
    vector<int>women(n),men(n+1);
    for(int z=0;z<n;z++){
        int k;
        cin>>k;
        vector<int>pref(k);
        for(int i=0;i<k;i++){
          cin >> pref[i];
        }    
        for(int i=0;i<k;i++){
            --pref[i];
            if(men[pref[i]]==0){
                women[z]=1;
                men[pref[i]] = 1;
                break;
            }
        }
    }
    /*for(int i=0;i<n;i++){
        cout<<women[i]<<" ";
    }
    cout<<endl;*/
    int flag=0;
        for(int i=0;i<n;i++){
            if(women[i]==0){
                auto index=find(men.begin(),men.end(),0);
                if(index!=men.end()){
                  cout << "IMPROVE" << endl;
                  cout << i + 1 << " " << index - men.begin() + 1 << endl;
                  flag=1;
                  break;
                }
            }
        }
        if(flag==0) cout<<"OPTIMAL"<<endl;
}
}
int32_t main() {
  IOS;
  init();
  return 0;
}
