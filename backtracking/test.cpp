#include <bits/stdc++.h>
using namespace std;
void subsets(vector<string> &a, vector<string> &chosen) {
  if (a.empty()) {
    for (auto x : chosen)
      cout << x << " ";
    cout << endl;
  } else {
    string ele = a[0];
    a.erase(a.begin());
    subsets(a, chosen); // without
    chosen.push_back(ele);
    subsets(a, chosen); // with
  }
}
int main() {
  vector<string> a{"vim", "emacs","vscode"};
  vector<string> chosen;
  subsets(a,chosen);
}