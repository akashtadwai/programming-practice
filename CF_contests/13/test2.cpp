#include <bits/stdc++.h>
using namespace std;
int main() {
    int x=56;
    string ans;
  for (int i = 0; i < 30; i++){
    if ((x & (1 << i)))
      ans += '1';
    else
      ans += '0';
  }
   reverse(ans.begin(),ans.end());
   cout<<ans<<endl;

}