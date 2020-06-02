#include <bits/stdc++.h>
using namespace std;
void DiceRollHelper(int n, vector<int> chosen) {
  if (n == 0) {
    for (auto x : chosen)
      cout << x << " ";
    cout << endl;
  } else {
    for (int i = 1; i <= 6; i++) {
      chosen.push_back(i);
      DiceRollHelper(n - 1, chosen);
      chosen.pop_back();
    }
  }
}
void diceroll(int n) {
  vector<int> chosen;
  DiceRollHelper(n, chosen);
}
int main() {
  int n;
  cin >> n;
  diceroll(n);
}