#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> res;
void PrintAllhelper1(vector<string> a, vector<string> chosen) {
  if (a.empty()) {
    for (auto x : chosen)
      cout << x << " ";
    cout << endl;
  } else {
    string ele = a[0];
    a.erase(a.begin());
    PrintAllhelper1(a, chosen); // without
    chosen.push_back(ele);
    PrintAllhelper1(a, chosen); // with
  }
}
void printall(vector<string> a) {
  vector<string> temp;
  PrintAllhelper1(a, temp);
}

int main() {
  /*int n;
  cin >> n;
  vector<string> a(n);
  for (auto &i : a)
    cin >> i;*/
  vector<string> a{"vim","emacs"};
  vector<string> chosen;
  printall(a);
  /*for (auto i : res) {
    for (auto j : i)
      cout << j << " ";
    cout << endl;
  }*/
}