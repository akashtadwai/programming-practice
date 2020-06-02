#include <bits/stdc++.h>
using namespace std;
int sumall(vector<int> &v) {
  int s = 0;
  for (auto x : v)
    s += x;
  return s;
}
void diceRollHelper(int dice,int sum, int desiredsum, vector<int> &chosen,int midx) {
  if (dice == 0) {
    if (sum == desiredsum) {
      for (auto x : chosen)
        cout << x << " ";
      cout << endl;
    }
  } else if(sum+dice<=desiredsum and sum+6*dice>=desiredsum) {
    for (int i = midx; i <= 6; i++) {
      chosen.push_back(i);                          // choose
      diceRollHelper(dice - 1, sum+i,desiredsum,chosen,i); // explore
      chosen.pop_back();                            // un-choose
    }
  }
}
void diceRolls(int dice, int desiredsum) {
  vector<int> chosen;
  diceRollHelper(dice, 0,desiredsum, chosen,1);
}
int main() {
  int n, s;
  cin >> n >> s;
  diceRolls(n, s);
}