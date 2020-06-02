#include <bits/stdc++.h>
using namespace std;
int main() {
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    cout << 1LL * pow(2, (n / 2) + 1) - 2 << endl;
  }
}